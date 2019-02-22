/*
  ==============================================================================

    Spring.h
    Created: 22 Feb 2019 11:19:05am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Mass.h"
//==============================================================================
/*
*/
class Spring    : public Component
{
public:
    Spring(Mass* m1, Mass* m2, double k);
    ~Spring();

    void paint (Graphics&) override;
    void resized() override;

    void calculateForces();
    
private:
    double K = 1000000; //spring coefficient
    double K3 = 0; //spring coefficient
    double z = 0.1;
    double Z;
    Mass* m1;
    Mass* m2;
    
    double dist = 0;
    double prevDist = 0;
    double Ftot = 0;
    std::vector<double> F = {0, 0, 0};
    int numDim = 3;
    double l0 = 0.005;
    
    double k;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Spring)
};
