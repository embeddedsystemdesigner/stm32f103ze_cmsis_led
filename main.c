#include "stm32f10x.h"


// telegram id --->    @eneeir
// github --->  https://github.com/embeddedsystemdesigner
// website  ---> www.enee.ir


void delay_us(unsigned int time)
{
	
	while(time--)	
		{
			
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	__NOP();	
    __NOP();	__NOP();	
			
			
		}
	
	
}



void delay_ms(unsigned int time)
{
	

while(time--)
{
	
delay_us(1000);	
	
}
	
	
}






void GPIO_INIT(void)
{
GPIO_InitTypeDef GPIO;
	
	
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF,ENABLE);	

	
GPIO.GPIO_Mode = GPIO_Mode_Out_PP;
GPIO.GPIO_Pin = GPIO_Pin_4;
GPIO.GPIO_Speed = GPIO_Speed_2MHz;

GPIO_Init(GPIOF,&GPIO);	
	
}



int main(void)
{
	
GPIO_INIT();
	
while(1)
{
	
GPIO_SetBits(GPIOF,GPIO_Pin_4);	
delay_ms(500);	
GPIO_ResetBits(GPIOF,GPIO_Pin_4);
delay_ms(500);	
	
}



	
}

