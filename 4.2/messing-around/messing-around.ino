/* 
  Title: Description and comments.

  Arduino Test: Copy and paste this code into open the sketch window.

  This example code is in the public domain.
 */


// Constants: Constants won't change. They're used here to set the pin numbers: 

const int ledPin = 13;        // constant ledPin assigned to pin 13

 

// Variables: Variables will change. They’re used do assign variable names:

                              // there are no variables in this example

 

// Setup: The setup routine runs once when you start or press reset:

void setup() {                // put your setup code here, to run once

  pinMode(ledPin, OUTPUT);    // initialize the LED pin as an output   
}


// Loop: The loop routine runs over and over again forever:
void loop() {                 // put your main code here, to run repeatedly: 
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)

  delay(1000);               // wait for one second

  digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW

  delay(1000);                // wait for one second

}
