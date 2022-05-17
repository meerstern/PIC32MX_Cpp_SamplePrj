/*
 * wrapper.cpp
 *
 */

#include "wrapper.hpp"
#include "LedBlink.hpp"

void cpploop(void) {
    LedBlink instance;

    instance.toggle();
}
