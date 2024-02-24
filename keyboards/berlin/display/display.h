#include <stdbool.h>

#include "gpio.h"

typedef int16_t spi_status_t;

//SPI test config
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN PA5
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN PA7
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN PA6
#define SPI_MISO_PAL_MODE 5

//HAL config
#define HAL_USE_SPI TRUE
#define SPI_USE_WAIT TRUE
#define SPI_SELECT_MODE SPI_SELECT_MODE_PAD

