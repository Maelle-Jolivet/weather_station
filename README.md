# weather_station
Weather station on a ESP32, with an e-paper screen

Ubuntu 20.04

ESP32 (ESP WROOM-32 / NodeMCU-ESP32)

ESP-IDF v5.1.2


# Helloblink - Simple code to test the ESP32

`cd src/helloblink`

Run only once, to set up build directory: `idf.py set-target esp32`

Run only once, to set up (if necessary) project variables: `idf.py menuconfig`

Optional: `idf.py build`

To flash the firmware and view logs of the running application: `idf.py -p /dev/ttyUSB0 flash monitor`

# DHT - Simple code to test DHT11 sensor

`cd src/dht`

Driver for DHT11 is slighty modified from `esp-idf-lib`

Pinout : power 5V, data on GPIO17

# E-Paper Display

Waveshare 2.9inch e-paper display module, Rev. 2.1

Supports partial refresh

4-line interface SPI

Display in shades of grey

Full refresh : ~3 seconds

Precautions : 2 full refreshes should be spaced by 3 minutes, and 1 full refresh should be done everyday

DIN / MOSI / SDA : GPIO14

SCK / SCLK / CLK : GPIO13

CS : GPIO15

DC : GPIO27

RST : GPIO26

BUSY : GPIO25

## Sources and libraries

[Waveshare Library for e-paper displays - Github](https://github.com/waveshareteam/e-Paper)

[Product Specifications](https://files.waveshare.com/upload/7/79/2.9inch-e-paper-v2-specification.pdf)














