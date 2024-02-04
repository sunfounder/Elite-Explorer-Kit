/*
  The code is designed to control a 7-segment display using an Arduino. 
  It sequentially displays numbers 1-9 and letters A-F on the 7-segment 
  display, with each symbol displayed for one second.

  Board: Arduino Uno R4 
  Component: 7-segment Display
*/

// Define pins for each segment of the 7-segment display
const int a = 7;
const int b = 6;
const int c = 5;
const int d = 11;
const int e = 10;
const int f = 8;
const int g = 9;
const int dp = 4;  // Decimal point

void setup() {
  // Set pins 4 to 11 as output
  for (int thisPin = 4; thisPin <= 11; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
  // Initialize display by turning off all segments
  turnOffAllSegments();
}

void loop() {
  // Display numbers 1 to 9 and letters A to F sequentially
  digital_1(); delay(1000);
  digital_2(); delay(1000);
  digital_3(); delay(1000);
  digital_4(); delay(1000);
  digital_5(); delay(1000);
  digital_6(); delay(1000);
  digital_7(); delay(1000);
  digital_8(); delay(1000);
  digital_9(); delay(1000);
  digital_A(); delay(1000);
  digital_b(); delay(1000);
  digital_C(); delay(1000);
  digital_d(); delay(1000);
  digital_E(); delay(1000);
  digital_F(); delay(1000);
}

void digital_1()  //display 1 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void digital_2()  //display 2 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}

void digital_3()  //display 3 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}
void digital_4()  //display 4 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_5()  //display 5 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void digital_6()  //display 6 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
}

void digital_7()  //display 7 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void digital_8()  //display 8 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_9()  //display 9 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_A()  //display A to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_b()  //display b to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_C()  //display C to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}

void digital_d()  //display d to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
}

void digital_E()  //display E to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_F()  //display F to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void turnOffAllSegments() {
  // Turn off all segments of the 7-segment display
  for (int thisPin = 4; thisPin <= 11; thisPin++) {
    digitalWrite(thisPin, LOW);
  }
}
