/*
  ==============================================================================

    Network.cpp
    Created: 22 Feb 2019 9:43:39am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Network.h"
//==============================================================================
Network::Network() : numMasses(50), drawMode (drawMasses)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
//    std::vector<double> pos = {0.5, 0.5, 0.5};
}

Network::~Network()
{
}

void Network::init (double kToSet)
{
    k = kToSet;
    createString(numMasses);
//    masses[5]->setPos (1, 1);
    for(auto mass : masses)
    {
        mass->setInvM (k);
    }
}

void Network::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
    if (drawMode == drawLine) {
    
        Path stringPath;
        auto stringBounds = getHeight() / 2.0;
        stringPath.startNewSubPath(0, stringBounds);
        
        for (int i = 0; i < numMasses; i++)
        {
            int newY = masses[i]->getPos()[1] * 600;
            stringPath.lineTo(masses[i]->getPos()[0] * 800, newY);
        }
        stringPath.lineTo (getWidth(), stringBounds);
        g.setColour (Colours::lawngreen);
        g.strokePath (stringPath, PathStrokeType(2.0f));
    } else {
        resized();
    }
}

void Network::resized()
{
    if (AppDefines::numDim > 1)
    {
        for (int i = 0; i < masses.size(); ++i)
        {
            masses[i]->setAlpha (masses[i]->getPos()[2]);
            float size = 5 + 10 * masses[i]->getPos()[2];
            masses[i]->setBounds (masses[i]->getPos()[0] * 800 - size / 2.0, masses[i]->getPos()[1] * 600 - size / 2.0, size, size);
        }
    } else {
        for (int i = 0; i < masses.size(); ++i)
        {
            masses[i]->setBounds(i * AppDefines::AppWidth / masses.size(), masses[i]->getPos()[0] * 600, 10, 10);
        }
    }
}

void Network::update()
{
    for (auto mass : masses)
    {
        mass->calculateState();
    }
    
    for (auto spring : springs)
    {
        spring->calculateForces();
    }
    
    for (auto mass : masses)
    {
        mass->updateStates();
    }
    
//    std::cout<<masses[0]->getPos()[1]<<std::endl;
}

void Network::addMass (std::vector<double> position, double mass)
{
    masses.add (new Mass (position, mass, k));
    addAndMakeVisible(masses[masses.size()-1]);
}

void Network::createString (int numPoints)
{
    float spacing = 1 / static_cast<float>(numPoints);
    for (int i = 0; i < numPoints; ++i)
    {
        std::vector<double> pos;
        if (AppDefines::numDim > 1)
        {
            pos = {spacing * i, 0.5, 0.5};
        } else {
            pos = {0.5};
        }
        addMass (pos, 0.01);
        if (i == 0 || i == numPoints - 1)
        {
            masses[i]->setFixed();
        }
        
        if (i > 0)
        {
            connect (masses[i-1], masses[i]);
        }
    }
}

void Network::connect (Mass* m1, Mass* m2)
{
    springs.add (new Spring (m1, m2, k));
}

float Network::getLOutput()
{
    return AppDefines::numDim > 1 ? masses[outputMass]->getPos()[0] - outputMass / static_cast<float>(masses.size()) : masses[outputMass]->getPos()[0] - 0.5;
//    float xPosMass = masses[10]->getPos()[0] - 10 / masses.size();
//    float yPosMass = masses[10]->getPos()[1] - 0.5;
//    return sqrt (xPosMass * xPosMass + yPosMass *  yPosMass);
}

float Network::getROutput()
{
    return masses[outputMass]->getPos()[AppDefines::numDim > 1 ? 1 : 0] - 0.5;
}

void Network::mouseDown (const MouseEvent& e)
{
    float normXPos = e.x / static_cast<float> (AppDefines::AppWidth);
    float normYPos = e.y / static_cast<float> (AppDefines::AppHeight) - 0.5;
    int massNumber = normXPos * numMasses;
    if (!masses[static_cast<int>(massNumber)]->isFixed())
    {
//        masses[static_cast<int>(massNumber)]->setPos(0, masses[massNumber]->getPos()[AppDefines::numDim > 1 ? 1 : 0] + 0.5);
        if (AppDefines::numDim > 1)
        {
            std::cout << normYPos << std::endl;
            masses[static_cast<int>(massNumber)]->setPos(1, normYPos);
            masses[static_cast<int>(massNumber)]->setPos(2, normYPos);
        }
        else if (AppDefines::numDim == 1)
        {
            masses[static_cast<int>(massNumber)]->setPos(0, normYPos);
        }
//        std::cout << masses[static_cast<int>(massNumber)]->getPos()[0] << std::endl;
    }
}

