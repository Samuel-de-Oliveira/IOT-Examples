byte buttom {8};
byte led    {9};

// TODO: Ver sobre pulseIn
// TIP:  https://docs.arduino.cc/language-reference/en/functions/advanced-io/pulseIn/

void setup() {
  pinMode(buttom, INPUT_PULLUP);
}

void loop() {
  unsigned int pressTime = pulseIn(
      buttom, LOW
  );

  if (pressTime >= 500) {
    digitalWrite(led, HIGH);
  }
}
