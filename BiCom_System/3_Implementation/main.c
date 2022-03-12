/**
 * @file main.c
 * @author Group 18
 * @brief
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "MyStm32f407xx.h"
#include<stdbool.h>

void delay(void)
{
	for(uint32_t i=0;i<500000/10; i++);
}
int main(void)
{
    GPIO_Handle_t GPioLed,GPIOBtn;

    GPioLed.pGPIOx = GPIOD;
    GPioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GPioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GPioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GPioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPioLed.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_MODE_ALTFN;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GPioLed);

    GPioLed.pGPIOx = GPIOD;
        GPioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
        GPioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
        GPioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
        GPioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
        GPioLed.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_MODE_ALTFN;
        GPIO_PeriClockControl(GPIOD, ENABLE);
        GPIO_Init(&GPioLed);

        GPioLed.pGPIOx = GPIOD;
            GPioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
            GPioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
            GPioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
            GPioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
            GPioLed.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_MODE_ALTFN;
            GPIO_PeriClockControl(GPIOD, ENABLE);
            GPIO_Init(&GPioLed);

            GPioLed.pGPIOx = GPIOD;
                GPioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
                GPioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
                GPioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
                GPioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
                GPioLed.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_MODE_ALTFN;
                GPIO_PeriClockControl(GPIOD, ENABLE);
                GPIO_Init(&GPioLed);

    GPIOBtn.pGPIOx = GPIOA;
    GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
    GPIOBtn.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_MODE_ALTFN;
    GPIO_PeriClockControl(GPIOA, ENABLE);
        GPIO_Init(&GPIOBtn);

if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
    	{
    		//delay();
    		    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
    		    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
    		    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
    		    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);

    	}
}
