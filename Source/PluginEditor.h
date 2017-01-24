/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Judio/Judio.h"

//==============================================================================
/**
*/
class Editor  : public AudioProcessorEditor
{
public:
    explicit Editor (Processor&);
    ~Editor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    jdo::StateComponent stateComponent;

    jdo::SliderStep irChooseSlider;

    jdo::SliderStep mixSlider;
    jdo::SliderStep gainSlider;

    ToggleButton bypassToggle;

    Image backgroundImage {ImageCache::getFromMemory (BinaryData::layout04NoKnobsfs8_png,
                                                      BinaryData::layout04NoKnobsfs8_pngSize)};

    Processor& processor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Editor)
};

#endif  // PLUGINEDITOR_H_INCLUDED
