/*
 * honeywell-hpm-particlesensor.h
 *
 *  Created on: Nov 15, 2017
 *      Author: martin
 */

#ifndef HONEYWELL_HPM_PARTICLESENSOR_H_
#define HONEYWELL_HPM_PARTICLESENSOR_H_


int hpmSetUart(UART_HandleTypeDef *huart);
int hpmReadResults(int *pm25concentration, int *pm10concentration);
int hpmStartParticleMeasurement();
int hpmStopParticleMeasurement();
int hpmSetAdjustmentCooeff(int coeff);
int hpmReadAdjustmentCooeff(int *coeff);
int hpmStopAutoSend();
int hpmEnableAutoSend();

#define HPM_ERR_OK 0
#define HPM_ERR_GENERAL -1
#define HPM_ERR_BAD_ARG -2
#define HPM_ERR_NEG_ACK -3
#define HPM_ERR_NO_RESPONSE -4
#define HPM_ERR_BAD_RESPONSE -5
#define HPM_ERR_BAD_CHECKSUM -6


#endif /* HONEYWELL_HPM_PARTICLESENSOR_H_ */
