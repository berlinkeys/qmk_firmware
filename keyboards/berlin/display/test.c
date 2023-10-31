#include "spi.c"

//spi settings
static pin_t slavePin = PC2;
static bool lsbFirst = false;
static int8_t mode = 2;
static int16_t divisor = 128;


spi_init();
spi_start(slavePin, lsbFirst, mode, divisor);

//read disp id
spi_read(*0xC0000);
