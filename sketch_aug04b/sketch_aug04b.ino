int pin1 = 2;
int pin2 = 3;
int pin7 = 7;
int pin11=11;
void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin1, LOW);
delay(1000);

digitalWrite(pin1, HIGH);
delay(1000);

digitalWrite(pin2, LOW);
delay(1000);

digitalWrite(pin2, HIGH);
delay(1000);

digitalWrite(pin7, LOW);
delay(1000);

digitalWrite(pin7, HIGH);
delay(1000);

digitalWrite(pin11, LOW);
delay(1000);

digitalWrite(pin11, HIGH);
delay(1000);


}
