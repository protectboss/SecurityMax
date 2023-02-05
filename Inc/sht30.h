#ifndef INC_SHT30_H_
#define INC_SHT30_H_

#include "stm32f1xx.h"

#define SHT30_ADDR 0x44

#define SHT30_ADDR_WR (SHT30_ADDR<<1)
#define SHT30_ADDR_RD ((SHT30_ADDR<<1) | 0x01)

#define SHT30_DATA_SIZE 6

typedef enum
{
	SOFT_RESET_CMD = 0x30A2,

	HIGH_ENABLED_CMD = 0x2C06,
	MEDIUM_ENABLED_CMD =0x2C0D,
	LOW_ENSABLED_CMD = 0x2C10,
	HIGH_DISABLED_CMD = 0x2400,
	MEDIUM_DISABLED_CMD = 0X240B,
	LOW_DISABLED_CMD = 0x2416,


	HIGH_0_5_CMD = 0x2032,
	MEDIUM_0_5_CMD = 0x2024,
	LOW_0_5_CMD = 0x202F,
	HIGH_1_CMD = 0x2130,
	MEDIUM_1_CMD = 0x2126,
	LOW_1_CMD = 0x212D,
	HIGH_2_CMD = 0x2236,

	MEDIUM_2_CMD = 0x2220,
	LOW_2_CMD = 0x222B,
	HIGH_4_CMD = 0x2334,
	MEDIUM_4_CMD = 0x2322,
	LOW_4_CMD = 0x2329,
	HIGH_10_CMD = 0x2737,
	MEDIUM_10_CMD = 0x2721,
	LOW_10_CMD = 0x272A,
}SHT30_CMD;

extern int SHT30_SampleData(float *temperature, float *humidity);

#endif /* INC_SHT30_H_ */
































































