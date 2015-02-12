/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 10;
int tempPin = 5;
int temp = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  temp = analogRead(tempPin) * 0.92 - 30;  // TOO LOW
  Serial.println(temp);
  digitalWrite(led, temp < 150 ? HIGH : LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
}
