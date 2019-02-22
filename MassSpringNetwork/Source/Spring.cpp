/*
  ==============================================================================

    Spring.cpp
    Created: 22 Feb 2019 11:19:05am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Spring.h"

//==============================================================================
Spring::Spring (Mass* m1, Mass* m2, double k) : m1(m1), m2(m2), k(k)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    Z = z / k;
}

Spring::~Spring()
{
}

void Spring::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
}

void Spring::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void Spring::calculateForces()
{
    if (prevDist == 0)
    {
        prevDist = sqrt((m1->getPrevPos()[0] - m2->getPrevPos()[0]) * (m1->getPrevPos()[0] - m2->getPrevPos()[0]) + (m1->getPrevPos()[1] - m2->getPrevPos()[1]) * (m1->getPrevPos()[1] - m2->getPrevPos()[1])
                        + (m1->getPrevPos()[2] - m2->getPrevPos()[2]) * (m1->getPrevPos()[2] - m2->getPrevPos()[2]));
    }
    else
    {
        prevDist = dist;
    }
    dist = sqrt((m1->getPos()[0] - m2->getPos()[0]) * (m1->getPos()[0] - m2->getPos()[0])
                + (m1->getPos()[1] - m2->getPos()[1]) * (m1->getPos()[1] - m2->getPos()[1])
                + (m1->getPos()[2] - m2->getPos()[2]) * (m1->getPos()[2] - m2->getPos()[2]));
    
    Ftot = -K * (dist - l0) - K3 * (dist - l0) * (dist - l0) * (dist - l0) - Z * (dist - prevDist);
    for (int i = 0; i < numDim; ++i)
    {
        F[i] = Ftot * (m1->getPos()[i] - m2->getPos()[i]) / dist;
    }
    
    m1->addForces(F);
    m2->subtractForces(F);
}
