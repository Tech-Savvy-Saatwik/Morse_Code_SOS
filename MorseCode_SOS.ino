int myPin=8;
int dot=50;
int dash=150;
int LongWait=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(myPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

digitalWrite(myPin,HIGH);
delay(dash);
digitalWrite(myPin,LOW);
delay(dash);

digitalWrite(myPin,HIGH);
delay(dash);
digitalWrite(myPin,LOW);
delay(dash);

digitalWrite(myPin,HIGH);
delay(dash);
digitalWrite(myPin,LOW);
delay(dash);

digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

digitalWrite(myPin,HIGH);
delay(dot);
digitalWrite(myPin,LOW);
delay(dot);

delay(LongWait);
}
