#🚧 Automatic Toll Gate System using Arduino

## 📌 Project Overview
This project simulates the operation of an automated toll plaza barrier system. When a vehicle approaches the toll gate within a predefined distance, the ultrasonic sensor detects its presence and sends a signal to the Arduino. The Arduino then actuates a servo motor, which opens the barrier for a few seconds before closing it automatically.

## 🛠 Components Used
| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |
| USB Cable | 1 |

## ⚙ Hardware Connections

### HC-SR04 Connections
| HC-SR04 Pin | Arduino Pin |
|-------------|------------|
| VCC | 5V |
| GND | GND |
| TRIG | D6 |
| ECHO | D7 |

### Servo Motor Connections
| Servo Pin | Arduino Pin |
|-----------|------------|
| VCC (Red) | 5V |
| GND (Brown/Black) | GND |
| Signal (Orange) | D9 |

## 🔄 Working Principle
1. The HC-SR04 continuously measures the distance of nearby objects.
2. If an object is detected within 15 cm:
   - The Arduino commands the servo motor to rotate to 90°.
   - The gate remains open for 3 seconds.
   - The servo then returns to 0°, closing the gate.
3. The process repeats continuously.

## 🔗 Tinkercad Simulation
https://www.tinkercad.com/things/bESJItNtE3g-toll-gate/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fall&sharecode=H4lRfyBSkCiKJDQaZpvKWezEBRuKvrWY9501NHLArjw

## 👩‍💻 Author
**Abiraami P**
