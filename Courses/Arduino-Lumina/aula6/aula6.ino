byte buttom {8};
byte led    {9};

// TODO: Ver sobre pulseIn

void setup() {
  pinMode(buttom, INPUT_PULLUP);
}

void loop() {
  digitalWrite(led, !digitalRead(buttom));
  delay(10);
}
