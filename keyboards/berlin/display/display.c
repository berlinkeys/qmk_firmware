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

    SPDR = 0x00;
    spi_init();

    static pin_t slavePin = PC2;
    static bool lsbFirst = false;
    static int8_t mode = 2;
    static int16_t divisor = 128;

    spi_start(slavePin, lsbFirst, mode, divisor);

    SPDR = SPDR | spi_write(0x00);
    SPDR = SPDR | spi_write(0x00);
    SPDR = SPDR | spi_write(0x00);

    return SPDR;
}


//read disp id
initialize_display();
spi_read(*0xC0000);