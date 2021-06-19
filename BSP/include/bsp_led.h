/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  jOKERII
  * @version V1.0
  * @date    2021-06-19
  * @brief   ledӦ�ú����ӿ�
  ******************************************************************************
  * @attention
  *

  ******************************************************************************
  */
#ifndef __LED_H
#define	__LED_H

#include "stm32f4xx.h"

//���Ŷ���
/*******************************************************/
//R ��ɫ��
#define LED1_PIN                  GPIO_Pin_2                 
#define LED1_GPIO_PORT            GPIOC                      
#define LED1_GPIO_CLK             RCC_AHB1Periph_GPIOC

//Y ��ɫ��
#define LED2_PIN                  GPIO_Pin_3                 
#define LED2_GPIO_PORT            GPIOC                      
#define LED2_GPIO_CLK             RCC_AHB1Periph_GPIOC

//B ��ɫ��
#define LED3_PIN                  GPIO_Pin_1                
#define LED3_GPIO_PORT            GPIOC                       
#define LED3_GPIO_CLK             RCC_AHB1Periph_GPIOC

//W ��ɫ��
#define LED4_PIN                  GPIO_Pin_0                
#define LED4_GPIO_PORT            GPIOC                       
#define LED4_GPIO_CLK             RCC_AHB1Periph_GPIOC

/************************************************************/


/** ����LED������ĺ꣬
	* LED�͵�ƽ��������ON=0��OFF=1
	* ��LED�ߵ�ƽ�����Ѻ����ó�ON=1 ��OFF=0 ����
	*/
#define ON  0
#define OFF 1

/* ���κ꣬��������������һ��ʹ�� */
#define LED1(a)	if (a)	\
					GPIO_SetBits(LED1_GPIO_PORT,LED1_PIN);\
					else		\
					GPIO_ResetBits(LED1_GPIO_PORT,LED1_PIN)

#define LED2(a)	if (a)	\
					GPIO_SetBits(LED2_GPIO_PORT,LED2_PIN);\
					else		\
					GPIO_ResetBits(LED2_GPIO_PORT,LED2_PIN)

#define LED3(a)	if (a)	\
					GPIO_SetBits(LED3_GPIO_PORT,LED3_PIN);\
					else		\
					GPIO_ResetBits(LED3_GPIO_PORT,LED3_PIN)

#define LED4(a)	if (a)	\
					GPIO_SetBits(LED4_GPIO_PORT,LED4_PIN);\
					else		\
					GPIO_ResetBits(LED4_GPIO_PORT,LED4_PIN)


/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)			 {p->BSRRL=i;}		//����Ϊ�ߵ�ƽ
#define digitalLo(p,i)			 {p->BSRRH=i;}		//����͵�ƽ
#define digitalToggle(p,i)	 	 {p->ODR ^=i;}		//�����ת״̬

/* �������IO�ĺ� */
#define LED1_TOGGLE		digitalToggle(LED1_GPIO_PORT,LED1_PIN)
#define LED1_OFF		digitalHi(LED1_GPIO_PORT,LED1_PIN)
#define LED1_ON			digitalLo(LED1_GPIO_PORT,LED1_PIN)

#define LED2_TOGGLE		digitalToggle(LED2_GPIO_PORT,LED2_PIN)
#define LED2_OFF		digitalHi(LED2_GPIO_PORT,LED2_PIN)
#define LED2_ON			digitalLo(LED2_GPIO_PORT,LED2_PIN)

#define LED3_TOGGLE		digitalToggle(LED3_GPIO_PORT,LED3_PIN)
#define LED3_OFF		digitalHi(LED3_GPIO_PORT,LED3_PIN)
#define LED3_ON			digitalLo(LED3_GPIO_PORT,LED3_PIN)

#define LED4_TOGGLE		digitalToggle(LED3_GPIO_PORT,LED4_PIN)
#define LED4_OFF		digitalHi(LED3_GPIO_PORT,LED4_PIN)
#define LED4_ON			digitalLo(LED3_GPIO_PORT,LED4_PIN)

#define LED_OFF 		LED1_OFF;LED2_OFF;LED3_OFF;LED4_OFF

void LED_GPIO_Config(void);

#endif /* __LED_H */
