#include "moto.h"

void water_pump(void)
{
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_11,GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_12,GPIO_PIN_SET);
 __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,700);
}

void moto_move(void)
{
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_SET);
 __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_2,1000);
}

void water_pump_stop(void)
{
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_11,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_12,GPIO_PIN_SET);
 __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,0);
}

void moto_move_stop(void)
{
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_RESET);
 __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_2,0);
}
