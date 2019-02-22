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
Network::Network()
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
    createString(50);
    masses[5]->setPos (1, 1);
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
    resized();
}

void Network::resized()
{
    
    for (int i = 0; i < masses.size(); ++i)
    {
        masses[i]->setBounds(masses[i]->getPos()[0] * 800, masses[i]->getPos()[1] * 600, 10, 10);
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
        addMass ({spacing * i, 0.5, 0.5}, 0.01);
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
    return masses[10]->getPos()[0] - 10 / masses.size();
}

float Network::getROutput()
{
    return masses[10]->getPos()[1] - 0.5;
}

void Network::mouseDown (const MouseEvent& e)
{
    
    masses[5]->setPos(1, masses[5]->getPos()[1] + 0.1);
}

