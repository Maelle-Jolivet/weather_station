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

