/*int frontTrig = 22;
int frontEcho = 46;
int rightFrontTrig= 24;
int rightFrontEcho = 2;
int rightBackTrig = 26;
int rightBackEcho = 4;
int backTrig = 28;
int backEcho = 5;
int leftBackTrig = 30;
int leftBackEcho = 6;
*/

float readUltraSon(int trig, int echo) {

  //send wave
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  //stop sending
  digitalWrite(trig, LOW);

  int duration = pulseIn(echo, HIGH);
  float distance = (0.034 * duration)/2.0;

  return distance;
}

void backward() {

  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  analogWrite(3, 120);
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);
  analogWrite(11, 120);  
}

void foward() {

  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  analogWrite(3, 120);
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  analogWrite(11, 120);    
}

void left() {

  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  analogWrite(3, 120);
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  analogWrite(11, 120);  
}

void right() {

  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  analogWrite(3, 120);
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);
  analogWrite(11, 120);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  delay(100);

  pinMode(frontTrig, OUTPUT);
  pinMode(frontEcho, INPUT);
  pinMode(rightFrontTrig, OUTPUT);
  pinMode(rightFrontEcho, INPUT);
  pinMode(leftBackTrig, OUTPUT);
  pinMode(leftBackEcho, INPUT);
  pinMode(backTrig, OUTPUT);  
  pinMode(backEcho, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}
