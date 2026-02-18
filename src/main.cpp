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

#define FSR_PIN A0

int fsrValue = 0;

/**
 * @brief Initialize Serial communication and any required peripherals.
 *
 * This function configures the Serial port at 9600 baud and prints
 * an initialization banner to the Serial Monitor.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);
    Serial.println("=== FSR Force Measurement System Initialized ===");
}
