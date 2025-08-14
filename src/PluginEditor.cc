#include "PluginProcessor.hh"
#include "PluginEditor.hh"

AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p)
		: AudioProcessorEditor (&p), processorRef (p) {
	juce::ignoreUnused (processorRef);
	setSize (200, 200);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {
}

void AudioPluginAudioProcessorEditor::paint (juce::Graphics& g) {
	g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
	g.setColour (juce::Colours::white);
	g.setFont (15.0f);
	g.drawFittedText ("OJ", getLocalBounds(), juce::Justification::centred, 1);
}

void AudioPluginAudioProcessorEditor::resized() {
}
