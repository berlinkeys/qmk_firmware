#include "display.h"

#include "spi_master.h"

#include "timer.h"
#include "spi.c"

/*
steps:
implmenet pinout
init spi
send disp setup

SPI1!
CLK 30  PA5
MISO/IO1 31  PA6
MOSI/IO0 32  PA7
CS  19  PF2

INT 18  PC3
PD  17  PC2
IO2 16  PC1
IO3 15  PC0

*/



spi_status_t initialize_display() {

    data = 0x00;
    spi_init();

    static pin_t slavePin = PC2;
    static bool lsbFirst = false;
    static int8_t mode = 2;
    static int16_t divisor = 128;

    out = spi_start(slavePin, lsbFirst, mode, divisor);

    data = data | spi_write(0x00);
    data = data | spi_write(0x00);
    data = data | spi_write(0x00);

    return out;
}


//read disp id

if (initialize_display()) {
     writePinHigh(LED_SCROLL_LOCK_PIN);
}
spi_read(*0xC0000);
