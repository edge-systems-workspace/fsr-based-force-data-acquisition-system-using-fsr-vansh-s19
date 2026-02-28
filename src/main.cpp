/**
* @file main.cpp
 * @brief Embedded Force Detection System using FSR
 * @author Vansh Saxena
 * @date 2026-02-28
 *
 * @details
 * This program reads the analog value from a Force Sensitive Resistor (FSR)
 * connected in a voltage divider configuration.
 * It displays force intensity and classifies pressure levels
 * using structured Serial output.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)
    #define FSR_PIN A0

/**
 * @brief Initializes serial communication for FSR system.
 *
 * Serial communication is started at 9600 baud rate.
 */
 // TODO 2:
 // Create variable to store sensor reading
    int fsrValue;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("FSR Force Detection System Initialized");
}

/**
 * @brief Continuously reads FSR value, prints force intensity,
 * and detects pressure condition.
 *
 * Analog value range: 0–1023
 */

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("Force Value: ");
    Serial.println(fsrValue);
    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)
    if (fsrValue < 100) {
        Serial.println("No Pressure");
    }
    else if (fsrValue < 500) {
        Serial.println("Medium Pressure");
    }
    // TODO 8:
    // Print pressure detection message
    else {
        Serial.println("High Pressure");
    }


    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}