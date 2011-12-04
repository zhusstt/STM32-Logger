#include "stm32f10x.h"

//Macros to link to the periph functions
#define Set_PWM_0(compare) TIM_SetCompare2(TIM3, compare)
#define Set_PWM_1(compare) TIM_SetCompare3(TIM4, compare)
#define Set_PWM_2(compare) TIM_SetCompare4(TIM4, compare)
//Configure the pwm
void setup_pwm(void);
