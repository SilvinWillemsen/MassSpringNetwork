/*
  ==============================================================================

    Mass.h
    Created: 22 Feb 2019 9:43:22am
    Author:  Silvin Willemsen

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "AppDefines.h"
//==============================================================================
/*
*/

class Mass : public Component
{
public:
    Mass (std::vector<double> pos, double mass, double k);
    ~Mass();

    void paint (Graphics&) override;
    void resized() override;

    void setPos (std::vector<double> posToSet);
    void setPos (int idx, double posToSet) {
        pos[idx] = posToSet;
        if (!init)
        {
            prevPos[idx] = posToSet;
            init = true;
        }
    };
    
    std::vector<double>& getNextPos() { return nextPos; };
    std::vector<double>& getPos() { return pos; };
    std::vector<double>& getPrevPos() { return prevPos; };
    
    void setFixed (bool val = true) { fixed = val; };
    bool isFixed() { return fixed; };
    
    void calculateState();
    void updateStates();
    
    void addForces (std::vector<double> F);
    void subtractForces (std::vector<double> F);
    
    void setIdx (int val) { idx = val; };
    
    void setInvM (double k);
    
    void setZValue (double val) { zValue = val;}
private:
    double mass;
    std::vector<double> nextPos;
    std::vector<double> pos;
    std::vector<double> prevPos;
    

//    std::vector<int> intPos = {0, 0, 0};
//    std::vector<int> prevIntPos = {0, 0, 0};
    
    bool fixed = false;
    
    double invM;
    
    int idx;
    double sOk;
    
    double k;
    double zValue = 0.5;
    bool init = false;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Mass)
};
