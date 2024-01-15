#include <stdio.h>

#include "esp_err.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "dht.h"

#define DHT11_GPIO  17

static const char *TAG = "dht_main";

// Task function, infinite loop
void dht_test(void *pvParameters) {
    int16_t humidity, temperature;

    while (1) {
        if (dht_read_data(DHT11_GPIO, &humidity, &temperature) == ESP_OK) {
            // DHT11 : humidity -+5%HR precision, temperature -+2°C precision
            ESP_LOGI(TAG, "Humidity=%d%% | Temp=%d°C", humidity, temperature);
        }
        else {
            ESP_LOGW(TAG, "Could not read data from sensor");
        }

        // void vTaskDelay(const TickType_t xTicksToDelay);
        vTaskDelay(pdMS_TO_TICKS(3000));
    }
}

void app_main() {
    /*  BaseType_t xTaskCreate(TaskFunction_t pvTaskCode,
                            const char * const pcName,
                            configSTACK_DEPTH_TYPE usStackDepth,
                            void *pvParameters,
                            UBaseType_t uxPriority,
                            TaskHandle_t *pxCreatedTask
                          );

    */
    BaseType_t return_code = xTaskCreate(dht_test, "dht_test", configMINIMAL_STACK_SIZE * 3, NULL, 5, NULL);
    if (return_code == pdPASS) {
        ESP_LOGI(TAG, "dht_test task successfully created");
    }
}
