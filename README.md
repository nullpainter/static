# ESP32/Arduino TV static simulator

This is a very small but fast fake analog TV static generator for a TFT display, complete with questionable scan-lines. It should look reasonably accurate if put behind some sort of clear case.

<img src="https://github.com/nullpainter/static/blob/main/images/animation.gif" />

## Notes

1. This application was built for an ESP32. If you're using an Arduino instead, substitute `esp_random()` with `random()`
2. The `User_Setup.h` file defines the TFT board and GPIO pin mappings for the [TFT-eSPI](https://github.com/Bodmer/TFT_eSPI) library. It should be edited to suit your needs and moved into the `TFT_eSPI` library folder as per the library's instructions. I dislike this approach for a number of reasons, however it's how the library works. 
