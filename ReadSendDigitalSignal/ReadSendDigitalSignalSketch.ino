/*
 * yellow: mcD10 - D5
 * black: mcGND - "-"
 * blue: mc5V - "+"
 * resistance: J25 - J29
 * led: I29 - I32
 * black: J32 - "-"
 * blue: D7 - "+"
 */
bool buttonPressed = false;

void setup() {
 pinMode(5, OUTPUT);
 pinMode(10, INPUT);
 Serial.begin(9600);
}

void loop() {
  buttonPressed = digitalRead(10);
  Serial.println(digitalRead(10));
  
  if (buttonPressed) {
    digitalWrite(5, true);
  } else {
    digitalWrite(5, false);
  }
}
