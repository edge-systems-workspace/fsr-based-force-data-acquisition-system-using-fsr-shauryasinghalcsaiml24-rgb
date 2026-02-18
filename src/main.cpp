// main.cpp
#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author shre-coder638
 * @date 2026-02-17
 *
 * @details
 * Reads analog force data from an FSR (Force Sensitive Resistor) sensor
 * connected to `FSR_PIN` and prints structured output to the Serial Monitor.
 * Simple thresholding is used to indicate presence of pressure.
 */

#define FSR_PIN A0

int fsrValue = 0;
