void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  pinMode(8, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

int analogSig = analogRead(A0);

bool digitalSig = digitalRead(8);

Serial.println(analogSig);
//Serial.println(digitalSig);
  delay(1000);
}
