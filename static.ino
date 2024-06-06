#include "SPI.h"
#include "TFT_eSPI.h"

TFT_eSPI tft = TFT_eSPI();
uint8_t canvas[TFT_WIDTH][TFT_HEIGHT];

void setup() {
  tft.init();
  tft.startWrite();
}

void loop() {
  uint16_t x = esp_random() % TFT_WIDTH;
  uint16_t y = esp_random() % TFT_HEIGHT;

  // Invert existing pixel
  canvas[x][y] = canvas[x][y] ? 0 : 1;

  // Set intensity based on existing pixel and fake scan lines
  uint16_t intensity = canvas[x][y] ? (x % 2 == 0 ? TFT_DARKGREY : TFT_WHITE) : TFT_BLACK;
  
  tft.drawPixel(x, y, intensity);
}
