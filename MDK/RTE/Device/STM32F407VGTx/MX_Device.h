/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 25/09/2016 00:46:29
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     50000000
#define MX_SYSCLKFreq_VALUE                     50000000
#define MX_HCLKFreq_Value                       50000000
#define MX_FCLKCortexFreq_Value                 50000000
#define MX_CortexFreq_Value                     50000000
#define MX_AHBFreq_Value                        50000000
#define MX_APB1Freq_Value                       25000000
#define MX_APB2Freq_Value                       50000000
#define MX_APB1TimFreq_Value                    50000000
#define MX_APB2TimFreq_Value                    50000000
#define MX_48MHZClocksFreq_Value                25000000
#define MX_EthernetFreq_Value                   50000000
#define MX_I2SClocksFreq_Value                  192000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    50000000

/*-------------------------------- ADC1       --------------------------------*/

#define MX_ADC1                                 1

/* GPIO Configuration */

/* Pin PA5 */
#define MX_ADCx_IN5_Pin                         PA5
#define MX_ADCx_IN5_GPIOx                       GPIOA
#define MX_ADCx_IN5_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN5_GPIO_Pin                    GPIO_PIN_5
#define MX_ADCx_IN5_GPIO_Mode                   GPIO_MODE_ANALOG

/* DMA Configuration */

/* DMA ADC1 */
#define MX_ADC1_DMA_Instance                    DMA2_Stream0
#define MX_ADC1_DMA_FIFOMode                    DMA_FIFOMODE_DISABLE
#define MX_ADC1_DMA_Priority                    DMA_PRIORITY_LOW
#define MX_ADC1_DMA_Channel                     DMA_CHANNEL_0
#define MX_ADC1_DMA_PeriphDataAlignment         DMA_PDATAALIGN_HALFWORD
#define MX_ADC1_DMA_MemDataAlignment            DMA_MDATAALIGN_HALFWORD
#define MX_ADC1_DMA_Mode                        DMA_NORMAL
#define MX_ADC1_DMA_Direction                   DMA_PERIPH_TO_MEMORY
#define MX_ADC1_DMA_PeriphInc                   DMA_PINC_DISABLE
#define MX_ADC1_DMA_MemInc                      DMA_MINC_ENABLE

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA1_Stream6_IRQn */
#define MX_DMA1_Stream6_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream6_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream6_IRQn_Subriority         0

/* NVIC DMA2_Stream0_IRQn */
#define MX_DMA2_Stream0_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA2_Stream0_IRQn_Subriority         0

/* NVIC DMA1_Stream5_IRQn */
#define MX_DMA1_Stream5_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream5_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream5_IRQn_Subriority         0

/*-------------------------------- I2C1       --------------------------------*/

#define MX_I2C1                                 1

/* GPIO Configuration */

/* Pin PB6 */
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB7 */
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- TIM4       --------------------------------*/

#define MX_TIM4                                 1

/* GPIO Configuration */

/* Pin PD15 */
#define MX_S_TIM4_CH4_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH4_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH4_Pin                       PD15
#define MX_S_TIM4_CH4_GPIOx                     GPIOD
#define MX_S_TIM4_CH4_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH4_GPIO_Pin                  GPIO_PIN_15
#define MX_S_TIM4_CH4_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD12 */
#define MX_S_TIM4_CH1_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH1_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH1_Pin                       PD12
#define MX_S_TIM4_CH1_GPIOx                     GPIOD
#define MX_S_TIM4_CH1_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH1_GPIO_Pin                  GPIO_PIN_12
#define MX_S_TIM4_CH1_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD13 */
#define MX_S_TIM4_CH2_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH2_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH2_Pin                       PD13
#define MX_S_TIM4_CH2_GPIOx                     GPIOD
#define MX_S_TIM4_CH2_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH2_GPIO_Pin                  GPIO_PIN_13
#define MX_S_TIM4_CH2_GPIO_AF                   GPIO_AF2_TIM4

/* Pin PD14 */
#define MX_S_TIM4_CH3_GPIO_ModeDefaultPP        GPIO_MODE_AF_PP
#define MX_S_TIM4_CH3_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_S_TIM4_CH3_Pin                       PD14
#define MX_S_TIM4_CH3_GPIOx                     GPIOD
#define MX_S_TIM4_CH3_GPIO_PuPd                 GPIO_NOPULL
#define MX_S_TIM4_CH3_GPIO_Pin                  GPIO_PIN_14
#define MX_S_TIM4_CH3_GPIO_AF                   GPIO_AF2_TIM4

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA2 */
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIO_AF                    GPIO_AF7_USART2
#define MX_USART2_TX_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA3 */
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIO_AF                    GPIO_AF7_USART2
#define MX_USART2_RX_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA USART2_TX */
#define MX_USART2_TX_DMA_Instance               DMA1_Stream6
#define MX_USART2_TX_DMA_FIFOMode               DMA_FIFOMODE_DISABLE
#define MX_USART2_TX_DMA_Priority               DMA_PRIORITY_LOW
#define MX_USART2_TX_DMA_Channel                DMA_CHANNEL_4
#define MX_USART2_TX_DMA_PeriphDataAlignment    DMA_PDATAALIGN_BYTE
#define MX_USART2_TX_DMA_MemDataAlignment       DMA_MDATAALIGN_BYTE
#define MX_USART2_TX_DMA_Mode                   DMA_NORMAL
#define MX_USART2_TX_DMA_Direction              DMA_MEMORY_TO_PERIPH
#define MX_USART2_TX_DMA_PeriphInc              DMA_PINC_DISABLE
#define MX_USART2_TX_DMA_MemInc                 DMA_MINC_ENABLE

/* DMA USART2_RX */
#define MX_USART2_RX_DMA_Instance               DMA1_Stream5
#define MX_USART2_RX_DMA_FIFOMode               DMA_FIFOMODE_DISABLE
#define MX_USART2_RX_DMA_Priority               DMA_PRIORITY_LOW
#define MX_USART2_RX_DMA_Channel                DMA_CHANNEL_4
#define MX_USART2_RX_DMA_PeriphDataAlignment    DMA_PDATAALIGN_BYTE
#define MX_USART2_RX_DMA_MemDataAlignment       DMA_MDATAALIGN_BYTE
#define MX_USART2_RX_DMA_Mode                   DMA_NORMAL
#define MX_USART2_RX_DMA_Direction              DMA_PERIPH_TO_MEMORY
#define MX_USART2_RX_DMA_PeriphInc              DMA_PINC_DISABLE
#define MX_USART2_RX_DMA_MemInc                 DMA_MINC_ENABLE

/* NVIC Configuration */

/* NVIC USART2_IRQn */
#define MX_USART2_IRQn_interruptPremptionPriority 0
#define MX_USART2_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART2_IRQn_Subriority               0

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PB4 */
#define MX_PB4_Pin                              PB4
#define MX_PB4_GPIOx                            GPIOB
#define MX_PB4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB4_GPIO_Pin                         GPIO_PIN_4
#define MX_PB4_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

#endif  /* __MX_DEVICE_H */

