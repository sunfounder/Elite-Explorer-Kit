/*
  This code controls an LED using a button. When the button is pressed,
  the LED turns on; when the button is released, the LED turns off.

  Board: Arduino Uno R4 
  Component: Button and LED
*/

const int buttonPin = 12;  // Pin number for the button
const int ledPin = 13;     // Pin number for the LED

int buttonState = 0;  // Variable to hold the current state of the button

// Setup function runs once when the board starts
void setup() {
  pinMode(buttonPin, INPUT);  // Initialize buttonPin as an input pin
  pinMode(ledPin, OUTPUT);    // Initialize ledPin as an output pin
}

// Main loop function runs repeatedly
void loop() {
  // Read the current state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (HIGH)
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off
  }
}
