int speedPin=52;
int dir1 = 50;
int dir2 = 48;

int mSpeed=1200;


void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);

  Serial.begin(96000);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);

  delay(20);

  
  digitalWrite(dir1,LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(speedPin,mSpeed); 
  
  
}
