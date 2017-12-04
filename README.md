# stm32hpmlib
A library for interfacing to Honeywell HPM particle sensor from an STM32 microcontroller

This library has been written to interface specifically with the HPMA115S0-XXX particle sensor, but may work with other models.

The library supports the following commands and responses:

- Read Particle Measuring Results
- Start Particle Measurement
- Stop Particle Measurement
- Set Customer Adjustment Coefficient
- Read Customer Adjustment Coefficient
- Stop Auto Send
- Enable Auto Send

The library does not (yet) support:
- Auto send data

Note: the file stm3232hpmlib.c includes the STM32 HAL header file for the specific microcontroller model, and this should be updated as necessary.
