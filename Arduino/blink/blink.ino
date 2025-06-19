/* 
 *  Just a blink code to remove the code
 *  inside an Arduino.
 *
 */
int blink_time {100};
byte led_port {3};

void blinking(byte led, boolean mode) {
  digitalWrite(LED_BUILTIN, mode);
  digitalWrite(led, mode);
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinking(led_port, true);
  delay(blink_time);
  blinking(led_port, false);
  delay(blink_time);
}
