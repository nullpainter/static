# Trivial ESP32 fake analog TV static generator

This is a very small but fast fake static generator for a TFT display, complete with questionable fake scan-lines. It should look reasonably accurate if put behind some sort of clear distorting cover.

<img src="https://github.com/nullpainter/static/blob/main/images/animation.gif" />

## Notes

1. This application was built for an ESP32. If you're using an Arduino instead, substitute `esp_random()` with `random()`
2. The `User_Setup.h` file defines the TFT board and GPIO pin mappings for the [TFT-eSPI](https://github.com/Bodmer/TFT_eSPI) library. It should be edited to suit your needs and moved into the TFT_eSPI library folder. 
