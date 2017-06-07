//Autogenerated file
//MCU name: STM32L011D4
//MCU  xml: STM32L011D(3-4)Px.xml
//GPIO remap/alternate function xml: GPIO-STM32L021_gpio_v1_0_Modes.xml


#define VARIANT_PIN_LIST_DEFAULT \
   PIN(A,0), \
   PIN(A,1), \
   PIN(A,4), \
   PIN(A,7), \
   PIN(A,9), \
   PIN(A,10), \
   PIN(A,13), \
   PIN(A,14), \
   PIN(B,9), \
   PIN(C,14), \
   PIN(C,15), \



// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_4  , GPIO_AF3_I2C1  }, 
    { I2C1  , GPIOA, GPIO_PIN_9  , GPIO_AF1_I2C1  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_10 , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOA, GPIO_PIN_13 , GPIO_AF3_I2C1  }, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_14 , GPIO_AF5_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF0_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_13 , GPIO_AF5_SPI1  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM2--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_10 , GPIO_AF4_USART2}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_9  , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF4_USART2}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_0  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_7  }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
};

