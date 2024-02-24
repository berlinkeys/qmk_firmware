#pragma once

#include "display/display.h"

#undef HAL_USE_ADC
#define HAL_USE_ADC TRUE

#include_next <halconf.h>
