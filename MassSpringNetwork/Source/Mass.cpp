/*
  ==============================================================================

    Mass.cpp
    Created: 22 Feb 2019 9:43:22am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Mass.h"

//==============================================================================
Mass::Mass (std::vector<double> pos, double mass, double k) : mass (mass), k(k)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    nextPos.resize(AppDefines::numDim, 0);
    pos.resize(AppDefines::numDim, 0);
    prevPos.resize(AppDefines::numDim, 0);
    setPos (pos);
    double sigma = 0.01;
    sOk = sigma / k;
}

Mass::~Mass()
{
}

void Mass::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
    Colour c = Colours::yellow;
    c.withAlpha (static_cast<float> (zValue));
    g.setColour (Colours::yellow);
    g.fillEllipse (0, 0, getWidth(), getHeight());
//    setPos (pos);
}

void Mass::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
//
void Mass::setPos (std::vector<double> posToSet)
{
    nextPos = posToSet;
    pos = posToSet;
    prevPos = posToSet;
    
//    intPos[0] = static_cast<int>(posToSet[0] * 800);
//    intPos[1] = static_cast<int>(posToSet[1] * 600);
//    //still need z-pos
}

void Mass::calculateState()
{
    for (int i = 0; i < AppDefines::numDim; ++i)
        nextPos[i] = 2 * pos[i] - prevPos[i] - sOk * invM * (pos[i] - prevPos[i]);
}

void Mass::addForces (std::vector<double> F)
{
    if (fixed)
        return;
    
    for (int i = 0; i < AppDefines::numDim; ++i)
    {
        nextPos[i] += F[i] * invM;
    }
}

void Mass::subtractForces (std::vector<double> F)
{
    if (fixed)
        return;
    
    for (int i = 0; i < AppDefines::numDim; ++i)
    {
        nextPos[i] -= F[i] * invM;
    }
}

void Mass::updateStates()
{
    prevPos = pos;
    pos = nextPos;
}

void Mass::setInvM (double k)
{
    invM = k * k / mass;
}
