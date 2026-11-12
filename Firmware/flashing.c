#include "main.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"
#include <string.h>

/* Inside main() after MX_GPIO_Init() and MX_USB_DEVICE_Init(): */
uint32_t last_tick = 0;
const char *msg = "STM32F072CBT6 Alive!\r\n";

while (1)
{
    if ((HAL_GetTick() - last_tick) >= 500)
    {
        last_tick = HAL_GetTick();
        
        // Toggle Blue User LED on PA5
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
        
        // Transmit heartbeat over USB Virtual COM Port
        CDC_Transmit_FS((uint8_t *)msg, strlen(msg));
    }
}