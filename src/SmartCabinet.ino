#include "HX711.h"
#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h> // include I/O class header

// LCD and scale objects
hd44780_I2Cexp lcd;
HX711 scale;

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 7;
const int LOADCELL_SCK_PIN = 6;
const float threshold = 0.50; // Threshold weight in grams

void showMessage(const char* line1 = "", const char* line2 = "", const char* line3 = "", const char* line4 = "", unsigned long wait = 1000) {
    lcd.clear();
    lcd.setCursor(0, 0); lcd.print(line1);
    lcd.setCursor(0, 1); lcd.print(line2);
    lcd.setCursor(0, 2); lcd.print(line3);
    lcd.setCursor(0, 3); lcd.print(line4);
    delay(wait);
    lcd.clear();
}

void setup() {
    // Initialize LCD (20 columns, 4 rows)
    lcd.begin(20, 4);
    lcd.init();
    lcd.backlight();

    // Welcome sequence
    showMessage("", "Hello, User!");
    showMessage("      WELCOME", "      to your", "   Smart Kitchen", "      Cabinet!");
    showMessage("HX711 Demo", "Initializing the scale");
    showMessage("", "   CONTENTS", "are as follows:-");

    // Initialize scale
    scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);

    // Pre-calibration readings
    showMessage("Before setting up", "the scale:");
    showMessage("read: ", "", "", String(scale.read()).c_str());
    showMessage("read average: ", String(scale.read_average(10)).c_str());
    showMessage("get value: ", String(scale.get_value(3)).c_str());
    showMessage("get units: ", String(scale.get_units(3), 1).c_str());

    // Set scale and tare
    scale.set_scale(2280.f);
    scale.tare();

    // Post-calibration readings
    showMessage("After setting up", "the scale:");
    showMessage("read: ", "", "", String(scale.read()).c_str());
    showMessage("read average: ", String(scale.read_average(10)).c_str());
    showMessage("get value: ", String(scale.get_value(3)).c_str());
    showMessage("get units:", String(scale.get_units(3), 1).c_str());
    showMessage("Readings:");
}

void loop() {
    // Regular readings
    showMessage("a reading:", String(scale.get_units(), 1).c_str(),
                "average:", String(scale.get_units(10), 1).c_str(), 5000);

    float weight = scale.get_units(10); // Get average weight reading
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Weight: ");
    lcd.print(weight, 1); // Display weight

    lcd.setCursor(0, 1);
    if (weight < threshold) {
        lcd.print("Below Threshold");
    } else {
        lcd.print("Above Threshold");
    }

    delay(1000);
    lcd.clear();
}
