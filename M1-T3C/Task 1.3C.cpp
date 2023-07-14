// Arduino 1
//
int pin2Value = 0;
int pin3Value = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(2),changeLED,CHANGE);
  attachInterrupt(digitalPinToInterrupt(3),changeLED,CHANGE);
}

void loop()
{
}

void changeLED()
{
  pin2Value = digitalRead(2);
  pin3Value = digitalRead(3);
  Serial.println("sensor inputs: ");
  Serial.println(pin2Value);
  Serial.println(pin3Value);
  Serial.print("LED output: ");
  Serial.println(digitalRead(13));
  if (pin2Value == HIGH || pin3Value == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}


// Arduino 2
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if(analogRead(A0) >= 184) {
  	digitalWrite(2, HIGH);
  } else {
  	digitalWrite(2, LOW);
  }
}