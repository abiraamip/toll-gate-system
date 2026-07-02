#include <Servo.h>

// Define pins
const int trigPin = 6;
const int echoPin = 7;
const int servoPin = 9;

Servo gateServo;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  gateServo.attach(servoPin);
  gateServo.write(0); // Gate closed position
}

void loop() {
  long duration;
  int distance;

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If vehicle is detected within 15 cm, open gate
  if (distance < 15) {
    gateServo.write(90); // Gate open position
    delay(3000);         // Keep gate open for 3 seconds
    gateServo.write(0);  // Close gate
  }

  delay(500); // Small delay before next reading
}