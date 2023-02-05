#ifndef __LCD_H_
#define __LCD_H_

#include "stm32f1xx.h"

//#define LCD_DIS_CHINA_ROT  180	//ѡ����Ļ��ת����������ת0������ת180�ȣ�180
#define LCD_DIS_CHINA_ROT  0

#define LCD_COLUMN_NUMBER 128
#define LCD_LINE_NUMBER 64

	#if (LCD_DIS_CHINA_ROT == 180) 
	#define LCD_COLUMN_OFFSET 4					//��ת180����Ҫ��4��ƫ����
	#else 
	#define LCD_COLUMN_OFFSET 0
	#endif

#define LCD_PAGE_NUMBER (LCD_LINE_NUMBER/8)
#define LCD_COMMAND_NUMBER  13
/**********SPI���ŷ��䣬����LCD��������ʵ������޸�*********/

#define SPI_SCK_0  	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_RESET)    // ����sck�ӿڵ�PD0   ����
#define SPI_SCK_1  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET)       //��λ
#define SPI_SDA_0  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_RESET)       // ����SDA�ӿڵ�PD1
#define SPI_SDA_1  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET) 
//#define SPI_FSO  	(GPIOB->IDR&0X0080)				//�ֿ�оƬ��������ŵ�PB7
#define SPI_RST_0  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_RESET)       // ����RST�ӿڵ�PD2
#define SPI_RST_1  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_SET)
#define SPI_DC_0   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_3,GPIO_PIN_RESET)      // ����DC�ӿڵ�PD3
#define SPI_DC_1   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_3,GPIO_PIN_SET)
#define SPI_CS_0   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_4,GPIO_PIN_RESET)    // ����CS�ӿڵ�PD4
#define SPI_CS_1   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_4,GPIO_PIN_SET)
#define SPI_CS2_0  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_5,GPIO_PIN_RESET)    // ����CS2  �ֿ�оƬ �ӿڵ�PD5  
#define SPI_CS2_1  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_5,GPIO_PIN_SET)
//#define BL_0  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_6,GPIO_PIN_RESET)    // ����BL�ӿڵ�PD6
//#define BL_1  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_6,GPIO_PIN_SET)


//ָ���
#define W25X_WriteEnable 0x06
#define W25X_WriteDisable 0x04
#define W25X_ReadStatusReg 0x05
#define W25X_WriteStatusReg 0x01
#define W25X_ReadData 0x03
#define W25X_FastReadData 0x0B
#define W25X_FastReadDual 0x3B
#define W25X_PageProgram 0x02
#define W25X_BlockErase 0xD8
#define W25X_SectorErase 0x20
#define W25X_ChipErase 0xC7
#define W25X_PowerDown 0xB9
#define W25X_ReleasePowerDown 0xAB
#define W25X_DeviceID 0xAB
#define W25X_ManufactDeviceID 0x90
#define W25X_JedecDeviceID 0x9F



void SPI_SendByte(unsigned  char byte);
void LCD_send_cmd(unsigned char o_command);
void LCD_send_data(unsigned  char o_data);
void Column_set(unsigned char column);
void Page_set(unsigned char page);
void LCD_clear(void);
void LCD_full(void);
void LCD_init(void);
void Picture_display(const unsigned char *ptr_pic);
void Picture_ReverseDisplay(const unsigned char *ptr_pic);
void Temperature_Data_Output(int Temperaure);
void Humidity_Data_Output(int Humidity);
void LCD_12864_Init(void);



#endif
