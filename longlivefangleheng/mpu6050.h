#include "main.h"

#ifndef __MPU6050_H
#define __MPU6050_H

void MPU6050_Init(void);
uint8_t MPU6050_GetID(void);
void MPU6050_GetData(int16_t *AccX, int16_t *AccY, int16_t *AccZ,int16_t *GyroX, int16_t *GyroY, int16_t *GyroZ);
int16_t MPU6050_GetAccX(void);
int16_t MPU6050_GetAccY(void);
int16_t MPU6050_GetAccZ(void);
int16_t MPU6050_GetGyroX(void);
int16_t MPU6050_GetGyroY(void);
int16_t MPU6050_GetGyroZ(void);
#endif
