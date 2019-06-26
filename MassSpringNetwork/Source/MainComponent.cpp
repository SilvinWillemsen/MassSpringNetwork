/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (AppDefines::AppWidth, AppDefines::AppHeight);

    // specify the number of input and output channels that we want to open
    setAudioChannels (0, 2);
    addAndMakeVisible (network);
    Timer::startTimerHz (20);
    addAndMakeVisible (drawModeButton);
    drawModeButton.setButtonText ("Modebutton");
    drawModeButton.addListener (this);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
    fs = sampleRate;
    k = 1 / fs;
    network.init (k);
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
//    bufferToFill.clearActiveBufferRegion();
    float* Loutput = bufferToFill.buffer->getWritePointer(0);
    float* Routput = bufferToFill.buffer->getWritePointer(1);
//    std::cout << network.getMasses()[2]->getPos()[1] << std::endl;
    for (int i = 0; i < bufferToFill.numSamples; ++i)
    {
        network.update();
        Loutput[i] = clamp (network.getLOutput(), -1, 1);
        Routput[i] = clamp (network.getROutput(), -1, 1);
    }
//    std::cout << network.getMasses()[5]->getPos()[0] << std::endl;
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
//    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    // You can add your drawing code here!
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    network.setBounds (getLocalBounds());
    drawModeButton.setBounds(0, 0, 200, 50);
}

void MainComponent::timerCallback()
{
    repaint();
}

double MainComponent::clamp (double input, double min, double max)
{
    if (input > max)
        return max;
    else if (input < min)
        return min;
    else
        return input;
}

void MainComponent::buttonClicked (Button* button)
{
    if (drawModeButton.getToggleStateValue() == true)
    {
        network.setDrawMode (drawLine);
        std::cout << "Draw line" << std::endl;
        for (int i = 0; i < network.getMasses().size(); ++i)
        {
            network.getMasses()[i]->setAlpha(0.0);
        }
    }
    else
    {
        network.setDrawMode (drawMasses);
        std::cout << "Draw masses" << std::endl;
    }
}

void MainComponent::buttonStateChanged(Button* button)
{

}
