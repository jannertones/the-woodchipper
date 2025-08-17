/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.12

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "RNBO.h"
#include "RNBO_JuceAudioProcessor.h"

//==============================================================================

class OtherLookAndFeel : public juce::LookAndFeel_V4
{
public:

    void drawLinearSlider (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                g.fillAll (slider.findColour (Slider::backgroundColourId));
                Path p;
                p.addRectangle ((float) x, (float) y, sliderPos - x, (float) height);
                auto baseColour = slider.findColour (Slider::backgroundColourId);
                g.setColour (baseColour);
                g.fillPath (p);
                auto lineThickness = 0;
                g.drawRect (slider.getLocalBounds ().toFloat (), lineThickness);
                drawLinearSliderThumb (g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
            }

            void drawLinearSliderThumb (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                auto sliderRadius = (float) (getSliderThumbRadius (slider) - 2);
                float kx, ky;
                kx = sliderPos;
                ky = y + height * 0.5f;
                g.setColour (slider.findColour (Slider::thumbColourId));
                Path triangle;
                triangle.addTriangle(kx, ky - 6, kx - 7, ky + 6, kx + 7, ky + 6);
                g.fillPath(triangle);
            }
};

class OtherLookAndFeel2 : public juce::LookAndFeel_V4
{
public:

    void drawLinearSlider (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                g.fillAll (slider.findColour (Slider::backgroundColourId));
                Path p;
                p.addRectangle ((float) x, (float) y, sliderPos - x, (float) height);
                auto baseColour = slider.findColour (Slider::backgroundColourId);
                g.setColour (baseColour);
                g.fillPath (p);
                auto lineThickness = 0;
                g.drawRect (slider.getLocalBounds ().toFloat (), lineThickness);
                drawLinearSliderThumb (g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
            }

            void drawLinearSliderThumb (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                auto sliderRadius = (float) (getSliderThumbRadius (slider) - 2);
                float kx, ky;
                kx = sliderPos;
                ky = y + height * 0.5f;
                g.setColour (slider.findColour (Slider::thumbColourId));
                Path triangle;
                triangle.addTriangle(kx, ky + 6, kx + 7, ky - 6, kx - 7, ky - 6);
                g.fillPath(triangle);
            }
};

class OtherLookAndFeel3 : public juce::LookAndFeel_V4
{
public:

    void drawLinearSlider (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                g.fillAll (slider.findColour (Slider::backgroundColourId));
                Path p;
                p.addRectangle ((float) x, (float) y, sliderPos - x, (float) height);
                auto baseColour = slider.findColour (Slider::backgroundColourId);
                g.setColour (baseColour);
                g.fillPath (p);
                auto lineThickness = 0;
                g.drawRect (slider.getLocalBounds ().toFloat (), lineThickness);
                drawLinearSliderThumb (g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
            }

            void drawLinearSliderThumb (Graphics& g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider& slider) override
            {
                auto sliderRadius = (float) (getSliderThumbRadius (slider) - 2);
                float kx, ky;
                kx = sliderPos;
                ky = y + height * 0.5f;
                g.setColour (slider.findColour (Slider::thumbColourId));
                Path rect;
                rect.addQuadrilateral(kx, ky + 7, kx + 8, ky, kx, ky - 7, kx - 8, ky);
                g.fillPath(rect);
            }
};

class RootComponent  : public juce::Component,
                       public juce::Slider::Listener,
                       public juce::Button::Listener,
                       public juce::Timer
{
public:
    //==============================================================================
    RootComponent ();
    ~RootComponent() override;

    //==============================================================================
    void setAudioProcessor(RNBO::JuceAudioProcessor *p);
    void updateSliderForParam(unsigned long index, double value);
    void paint (juce::Graphics& g) override;
    void resized() override;
    void timerCallback() override;
    void sliderValueChanged (juce::Slider* sliderThatWasMoved) override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;
    void chooseFileForDataRef(const juce::String refName);
    // Binary resources:
    static const char* screenshot20240608At12_00_06am_png;
    static const int screenshot20240608At12_00_06am_pngSize;
    static const char* screenshot20240608At12_00_06am_png3;
    static const int screenshot20240608At12_00_06am_png3Size;
    static const char* screenshot20240608At12_00_06am_png2;
    static const int screenshot20240608At12_00_06am_png2Size;
    static const char* screenshot20240607At11_59_59pm_png2;
    static const int screenshot20240607At11_59_59pm_png2Size;
    static const char* woodchipperlogo_png;
    static const int woodchipperlogo_pngSize;
    static const char* screenshot20240607At11_59_59pm_png;
    static const int screenshot20240607At11_59_59pm_pngSize;
    static const char* screenshot20240628At4_54_35pm_png;
    static const int screenshot20240628At4_54_35pm_pngSize;
    static const char* woodgrains1_png;
    static const int woodgrains1_pngSize;
    static const char* woodgraphic1_png;
    static const int woodgraphic1_pngSize;
    static const char* woodgraphic2_png;
    static const int woodgraphic2_pngSize;
    static const char* woodgraphic3_png;
    static const int woodgraphic3_pngSize;
    static const char* woodgraphic1_png2;
    static const int woodgraphic1_png2Size;
    static const char* woodgraphic2_png2;
    static const int woodgraphic2_png2Size;
    static const char* woodgraphic3_png2;
    static const int woodgraphic3_png2Size;
    static const char* woodgraphic4_jpg;
    static const int woodgraphic4_jpgSize;
    static const char* woodgraphic5_png;
    static const int woodgraphic5_pngSize;
    static const char* woodgraphic7_png;
    static const int woodgraphic7_pngSize;
    static const char* woodgraphic6_png;
    static const int woodgraphic6_pngSize;
    static const char* woodgraphic8_png;
    static const int woodgraphic8_pngSize;
    static const char* woodgraphic9_png;
    static const int woodgraphic9_pngSize;
    static const char* woodgraphic10_png;
    static const int woodgraphic10_pngSize;
    static const char* woodgraphic11_png;
    static const int woodgraphic11_pngSize;
    static const char* woodgraphic12_png;
    static const int woodgraphic12_pngSize;
    static const char* woodgraphic10_png2;
    static const int woodgraphic10_png2Size;
    static const char* woodgraphic13_png;
    static const int woodgraphic13_pngSize;

private:
    OtherLookAndFeel otherLookAndFeel;
    OtherLookAndFeel2 otherLookAndFeel2;
    OtherLookAndFeel3 otherLookAndFeel3;
    RNBO::JuceAudioProcessor *processor = nullptr;
    HashMap<int, Slider *> slidersByParameterIndex;
    std::unique_ptr<juce::FileChooser> _dataRefChooser;

    //==============================================================================
    std::unique_ptr<juce::Label> juce__label57;
    std::unique_ptr<juce::Label> juce__label56;
    std::unique_ptr<juce::Label> juce__label55;
    std::unique_ptr<juce::Label> juce__label54;
    std::unique_ptr<juce::Label> juce__label53;
    std::unique_ptr<juce::Label> juce__label52;
    std::unique_ptr<juce::Label> juce__label51;
    std::unique_ptr<juce::Label> juce__label50;
    std::unique_ptr<juce::Label> juce__label49;
    std::unique_ptr<juce::Label> juce__label48;
    std::unique_ptr<juce::Label> juce__label8;
    std::unique_ptr<juce::Label> juce__label4;
    std::unique_ptr<juce::Label> juce__label3;
    std::unique_ptr<juce::Slider> juce__slider6;
    std::unique_ptr<juce::Label> juce__label40;
    std::unique_ptr<juce::Slider> juce__slider4;
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::Slider> juce__slider5;
    std::unique_ptr<juce::TextButton> juce__textButton;
    std::unique_ptr<juce::Slider> juce__slider25;
    std::unique_ptr<juce::Slider> juce__slider26;
    std::unique_ptr<juce::Label> juce__label41;
    std::unique_ptr<juce::Label> juce__label42;
    std::unique_ptr<juce::Label> juce__label5;
    std::unique_ptr<juce::Label> juce__label6;
    std::unique_ptr<juce::Label> juce__label7;
    std::unique_ptr<juce::Slider> juce__slider2;
    std::unique_ptr<juce::Slider> juce__slider3;
    std::unique_ptr<juce::Label> juce__label9;
    std::unique_ptr<juce::Slider> juce__slider7;
    std::unique_ptr<juce::Label> juce__label10;
    std::unique_ptr<juce::Label> juce__label11;
    std::unique_ptr<juce::Label> juce__label12;
    std::unique_ptr<juce::Slider> juce__slider8;
    std::unique_ptr<juce::Slider> juce__slider9;
    std::unique_ptr<juce::Label> juce__label13;
    std::unique_ptr<juce::Slider> juce__slider10;
    std::unique_ptr<juce::Label> juce__label14;
    std::unique_ptr<juce::Slider> juce__slider11;
    std::unique_ptr<juce::Label> juce__label15;
    std::unique_ptr<juce::Label> juce__label16;
    std::unique_ptr<juce::Label> juce__label17;
    std::unique_ptr<juce::Slider> juce__slider12;
    std::unique_ptr<juce::Slider> juce__slider13;
    std::unique_ptr<juce::Label> juce__label18;
    std::unique_ptr<juce::Slider> juce__slider14;
    std::unique_ptr<juce::Label> juce__label19;
    std::unique_ptr<juce::Label> juce__label20;
    std::unique_ptr<juce::Label> juce__label21;
    std::unique_ptr<juce::Slider> juce__slider15;
    std::unique_ptr<juce::Slider> juce__slider16;
    std::unique_ptr<juce::Label> juce__label22;
    std::unique_ptr<juce::Slider> juce__slider17;
    std::unique_ptr<juce::Label> juce__label23;
    std::unique_ptr<juce::Label> juce__label24;
    std::unique_ptr<juce::Label> juce__label25;
    std::unique_ptr<juce::Slider> juce__slider18;
    std::unique_ptr<juce::Slider> juce__slider19;
    std::unique_ptr<juce::Label> juce__label26;
    std::unique_ptr<juce::Slider> juce__slider20;
    std::unique_ptr<juce::Label> juce__label27;
    std::unique_ptr<juce::Label> juce__label28;
    std::unique_ptr<juce::Label> juce__label29;
    std::unique_ptr<juce::Slider> juce__slider21;
    std::unique_ptr<juce::Slider> juce__slider22;
    std::unique_ptr<juce::Label> juce__label30;
    std::unique_ptr<juce::Slider> juce__slider23;
    std::unique_ptr<juce::Label> juce__label31;
    std::unique_ptr<juce::Slider> juce__slider24;
    std::unique_ptr<juce::Label> juce__label32;
    std::unique_ptr<juce::Label> juce__label33;
    std::unique_ptr<juce::Label> juce__label34;
    std::unique_ptr<juce::Slider> juce__slider27;
    std::unique_ptr<juce::Label> juce__label35;
    std::unique_ptr<juce::Label> juce__label36;
    std::unique_ptr<juce::Slider> juce__slider28;
    std::unique_ptr<juce::Label> juce__label37;
    std::unique_ptr<juce::Slider> juce__slider29;
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label38;
    std::unique_ptr<juce::Label> juce__label39;
    std::unique_ptr<juce::Label> juce__label43;
    std::unique_ptr<juce::Label> juce__label44;
    std::unique_ptr<juce::Label> juce__label45;
    std::unique_ptr<juce::Label> juce__label46;
    std::unique_ptr<juce::Label> juce__label47;
    juce::Image cachedImage_woodgraphic11_png_1;
    juce::Image cachedImage_woodgraphic5_png_2;
    juce::Image cachedImage_woodgraphic4_jpg_3;
    juce::Image cachedImage_woodgraphic7_png_4;
    juce::Image cachedImage_woodchipperlogo_png_5;
    juce::Image cachedImage_screenshot20240608At12_00_06am_png3_6;
    juce::Path internalPath7;
    juce::Path internalPath8;
    juce::Path internalPath9;
    juce::Path internalPath10;
    juce::Path internalPath11;
    juce::Path internalPath12;
    juce::Path internalPath13;
    juce::Path internalPath14;
    juce::Path internalPath15;
    juce::Path internalPath16;
    juce::Path internalPath17;
    juce::Path internalPath18;
    juce::Path internalPath19;
    juce::Path internalPath20;
    juce::Path internalPath21;
    juce::Path internalPath22;
    juce::Path internalPath23;
    juce::Path internalPath24;
    juce::Image cachedImage_woodgraphic5_png_25;
    juce::Image cachedImage_woodgraphic6_png_26;
    juce::Image cachedImage_woodgraphic8_png_27;
    juce::Image cachedImage_woodgraphic9_png_28;
    juce::Image cachedImage_woodgraphic8_png_29;
    juce::Image cachedImage_woodgraphic1_png2_30;
    juce::Image cachedImage_woodgraphic2_png2_31;
    juce::Image cachedImage_woodgraphic3_png2_32;
    juce::Image cachedImage_woodgraphic1_png2_33;
    juce::Image cachedImage_woodgraphic6_png_34;
    juce::Image cachedImage_woodgraphic3_png2_35;
    juce::Image cachedImage_woodgraphic1_png2_36;
    juce::Image cachedImage_woodgraphic5_png_37;
    juce::Image cachedImage_woodgraphic11_png_38;
    juce::Image cachedImage_woodgraphic12_png_39;
    juce::Image cachedImage_woodgraphic11_png_40;
    juce::Image cachedImage_woodgraphic10_png_41;
    juce::Image cachedImage_woodgraphic10_png_42;
    juce::Image cachedImage_woodgraphic13_png_43;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RootComponent)
};

//[EndFile] You can add extra defines here...

//[/EndFile]

