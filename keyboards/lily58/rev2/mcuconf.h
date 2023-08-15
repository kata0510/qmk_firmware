#pragma once

#include_next <mcuconf.h>

#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 FALSE

#undef RP_I2C_USE_I2C1 // I2C1 is used for the OLED
#define RP_I2C_USE_I2C1 TRUE
