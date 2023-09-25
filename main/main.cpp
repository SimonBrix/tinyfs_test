#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "sdkconfig.h"
#include <Arduino.h>
#include "FS.h"
#include "LittleFS.h"


extern "C" void app_main(void)
{
	LittleFS.begin();
}