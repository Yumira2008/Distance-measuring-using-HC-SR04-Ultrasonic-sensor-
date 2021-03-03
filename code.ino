#define trig 2
#define echo 3

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long t = pulseIn(echo,HIGH);

  long inches = t / 74 / 2;
  long cm = t / 29 / 2;

  Serial.print(inches);
  Serial.print("in");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);

}
