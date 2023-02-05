#include "judge.h"
#include "moto.h"

extern int temp1,humi1;

void Mist_Spray(void)
{
if(humi1<70) HAL_GPIO_WritePin(GPIOD,GPIO_PIN_8,GPIO_PIN_SET);
else HAL_GPIO_WritePin(GPIOD,GPIO_PIN_8,GPIO_PIN_RESET);
}

void Flame_Alarm(void)
{
 if(HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_10))
 {	
	moto_move_stop();
	water_pump_stop();
 }
 else 
 {
	moto_move();
	water_pump();
 }
}

void Voice_Alarm(void)
{
 static int time1=0;
 static int time2=0;
 static int time3=0;
 if(HAL_GPIO_ReadPin(GPIOD,GPIO_PIN_10)) 
 {
	 HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,GPIO_PIN_SET);
	 time1=0;
 }
 else 
 {
	 HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,GPIO_PIN_RESET);
	 time1++;
	 if(time1==5)
	 {	
		 HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,GPIO_PIN_SET);
   	 time1=0;
	 }
 }



}