/*
  ==============================================================================

    Network.h
    Created: 22 Feb 2019 9:43:39am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Mass.h"
#include "Spring.h"

//==============================================================================
/*
*/
class Network    : public Component
{
public:
    Network();
    ~Network();

    void init(double k);
    
    void paint (Graphics&) override;
    void resized() override;

    void update();
    
    void addMass (std::vector<double> position, double mass);
    void createString (int numPoints);
    void connect (Mass* m1, Mass* m2);
    
    float getLOutput();
    float getROutput();
    
    OwnedArray<Mass>& getMasses() { return masses; };
    
    void mouseDown (const MouseEvent& e) override;
    
private:
    
    OwnedArray<Mass> masses;
    OwnedArray<Spring> springs;
    
    double k;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Network)
};
