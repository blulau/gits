/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/pooltemp_screen/PoolTempViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

PoolTempViewBase::PoolTempViewBase() :
    buttonCallback(this, &PoolTempViewBase::buttonCallbackHandler),
    sliderValueChangedCallback(this, &PoolTempViewBase::sliderValueChangedCallbackHandler)
{

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_BACKGROUND_ID));

    buttonOK.setXY(180, 207);
    buttonOK.setBitmaps(touchgfx::Bitmap(BITMAP_OK_BUTTON_ID), touchgfx::Bitmap(BITMAP_OK_BUTTON_PRESSED_ID));
    buttonOK.setAction(buttonCallback);

    slider.setXY(11, 121);
    slider.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER_ROUND_NOB_ID));
    slider.setupHorizontalSlider(2, 19, 2, 0, 309);
    slider.setValueRange(12, 28);
    slider.setValue(18);
    slider.setNewValueCallback(sliderValueChangedCallback);

    tempText.setPosition(381, 117, 115, 46);
    tempText.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    tempText.setLinespacing(0);
    tempTextBuffer[0] = 0;
    tempText.setWildcard(tempTextBuffer);
    tempText.setTypedText(touchgfx::TypedText(T_TEXTID2));

    add(background);
    add(buttonOK);
    add(slider);
    add(tempText);
}

void PoolTempViewBase::setupScreen()
{

}

void PoolTempViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonOK)
    {
        //OkClicked
        //When buttonOK clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenSlideTransitionWest();
    }
}

void PoolTempViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &slider)
    {
        //SliderChanged
        //When slider value changed call virtual function
        //Call sliderMoved
        sliderMoved(value);
    }
}
