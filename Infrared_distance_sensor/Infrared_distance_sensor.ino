/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

int counter = 0;

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  float sensorValue = analogRead(A0);

  // print out the value you read:
   Serial.println("\nIR Reading: " + (String)sensorValue);

  //Serial.println({sensorValue <= 120 ? "Object is at 20 cm or further" : "Object is less than 20 cm"});

 /* if(sensorValue <= 120) {
    Serial.println("Object is at 20 cm or further");
  } else {
    Serial.println("Object is less than 20 cm");

    counter++;
  }

  Serial.println(counter);
  
  */

  // Equation: R(d) = (2300/d) + 1

  float distance = 2300.0/(sensorValue - 1.0);

  Serial.println("\n" + (String) distance);



  
  delay(1000);        // delay in between reads for stability
}
