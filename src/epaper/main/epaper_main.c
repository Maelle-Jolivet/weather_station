/* 2.9" Waveshare ePaper Driver Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <string.h>
#include "esp_log.h"

#include "DEV_Config.h"
#include "EPD_2in9_V2.h"
#include "GUI_Paint.h"

static const char *TAG = "epaper_main";


void app_main() {
    ESP_LOGI(TAG, "Starting example");
    DEV_Module_Init();

    EPD_2IN9_V2_Init();
    EPD_2IN9_V2_Clear();
    DEV_Delay_ms(500);

    EPD_2IN9_V2_Sleep();

    while (1) {
        DEV_Delay_ms(1000);
    }

}





