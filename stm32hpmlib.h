/*
 * MIT License
 *
 * Copyright (c) 2017 Martin Christopher Williams
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
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
