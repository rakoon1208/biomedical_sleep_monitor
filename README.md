# Biomedical Sleep Monitor

This project is a low-cost sleep monitoring device designed to track sleep patterns using various sensors. It measures heart rate, detects snoring, and evaluates room brightness, providing feedback to improve sleep quality.

## Features
- **Heart Rate Monitoring**: Tracks and displays heart rate using a pulse sensor.
- **Snore Detection**: Counts snoring instances and displays them on an LCD.
- **Room Brightness Feedback**: Alerts users if the room is too bright for optimal sleep.

## Hardware Requirements
- Arduino Uno or compatible microcontroller
- Pulse Sensor
- Analog Sound Sensor (e.g., KY-038 or similar)
- Light Sensor (e.g., BH1750FVI)
- 16x2 LCD Display
- Potentiometer (for LCD contrast adjustment)
- Breadboard and jumper wires
- Power supply (USB or external)

## Software Requirements
- **Arduino IDE**: Version 1.8.19 or 2.x
  - Download: [Arduino Software](https://www.arduino.cc/en/software)
- **PulseSensorPlayground Library**
  - Install via Arduino Library Manager
- **LiquidCrystal Library**
  - Pre-installed with the Arduino IDE

## How It Works
1. **Heart Rate Monitoring**:
   - The pulse sensor detects beats per minute (BPM) and plots them using the Arduino Serial Plotter.
2. **Snore Detection**:
   - The sound sensor monitors sound intensity. If snoring is detected, a counter on the LCD increments.
3. **Brightness Feedback**:
   - The light sensor measures lux levels. If the room brightness exceeds 50 lux, the LCD displays "TooBright." Otherwise, it shows "GoodNight."

## Setup
1. Connect the sensors and LCD to the Arduino according to their pin configurations.
2. Upload the provided Arduino code files:
   - `PulseSensorCode.ino`: Manages the pulse sensor and serial plotter.
   - `LCD_Sound_Light_Code.ino`: Controls the sound sensor, light sensor, and LCD.
3. Open the Arduino Serial Plotter (baud rate: 9600) to visualize data.

## Troubleshooting
- **Snore Counter Increments Too Rapidly**:
  - Add a delay to debounce the sound intensity reading.
- **Noise from Sound Sensor**:
  - Implement a threshold to filter out ambient noise.
- **Interference Between Sensors**:
  - Use separate Arduinos for independent serial plotters.

## Future Improvements
- Design a 3D-printed enclosure for aesthetics and wire management.
- Integrate additional features like sleep tracking analytics.

## Acknowledgments
This project was developed as the final project for the course ELG3336 at the University of Ottawa.

---

**Authors**:
- Randina Amarakoon & Gabriel Bercea

