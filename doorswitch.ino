int inPin = 2;
int state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inPin, INPUT);
}

void loop() {
  state = digitalRead(inPin);
  Serial.println(state);
  delay(100);
}
