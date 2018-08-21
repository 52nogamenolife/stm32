
#include "timer.h"
#include "led.h"
#include "usart.h"
#include "sys.h"
#include "delay.h"

void EXTI15_10_IRQHandler(void);
void EXTI9_5_IRQHandler(void);
void ultrasonic_IRQ_init(void);
void ultrasonic_GPIO_init(void);
void TIM1_Configuration(short arr,short psc);
void trig_ultrasonic(void);
void getultrasonic(void);

