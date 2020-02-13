/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_MAIN_BACKGROUND_ID));

    onOffButton.setXY(97, 136);
    onOffButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID));
    onOffButton.setAction(buttonCallback);

    buttonAdjust.setXY(345, 133);
    buttonAdjust.setBitmaps(touchgfx::Bitmap(BITMAP_ADJUST_BUTTON_ID), touchgfx::Bitmap(BITMAP_ADJUST_BUTTON_PRESSED_ID));
    buttonAdjust.setAction(buttonCallback);

    bulpWhite.setXY(27, 117);
    bulpWhite.setBitmap(touchgfx::Bitmap(BITMAP_PEARE_HVID_ID));

    bulbYellow.setXY(27, 117);
    bulbYellow.setVisible(false);
    bulbYellow.setBitmap(touchgfx::Bitmap(BITMAP_PEARE_GUL_ID));

    add(background);
    add(onOffButton);
    add(buttonAdjust);
    add(bulpWhite);
    add(bulbYellow);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &onOffButton)
    {
        //toggleBulbColor
        //When onOffButton clicked execute C++ code
        //Execute C++ code
        bulbYellow.setVisible(!bulbYellow.isVisible());
        bulbYellow.invalidate();

        //ChangePoolLight
        //When onOffButton clicked call virtual function
        //Call updatePoolLight
        updatePoolLight();
    }
    else if (&src == &buttonAdjust)
    {
        //AdjustClicked
        //When buttonAdjust clicked change screen to PoolTemp
        //Go to PoolTemp with screen transition towards East
        application().gotoPoolTempScreenSlideTransitionEast();
    }
}