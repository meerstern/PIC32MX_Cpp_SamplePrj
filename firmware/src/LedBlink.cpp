/*
 * LedBlink.cpp
 *
 */

#include "LedBlink.hpp"
#include "app.h"
#include "peripheral/coretimer/plib_coretimer.h"
#include "peripheral/gpio/plib_gpio.h"

LedBlink::LedBlink() {


}

LedBlink::~LedBlink() {

}


void LedBlink::toggle() {
    LED_Toggle() ;
    CORETIMER_DelayMs(100);;
}
