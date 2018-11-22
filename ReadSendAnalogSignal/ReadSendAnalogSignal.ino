void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(A1, OUTPUT);
}

void loop() {
  int value = analogRead(A5);
//  Serial.print("Before mapping: ");
//  Serial.println(value);
//  Serial.print("After mapping: ");
//  Serial.println(value);
  analogWrite(A1, value/4);
}
