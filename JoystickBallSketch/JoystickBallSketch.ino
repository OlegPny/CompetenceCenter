/*
 * red: mcA1 - VRx
 * orange mcA1 - VRy
 * green: --
 */

String xDir;
String yDir;
String col;
String dir;

#define X_PIN A0
#define Y_PIN A1
#define COLOR_PIN 5

void setup() {
  // put your setup code here, to run once:
  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
  pinMode(COLOR_PIN, INPUT);
  Serial.begin(19200);
}

void loop() {
  getDirectionX();
  getDirectionY();
  getColour();
  printFinalDirection(xDir, yDir, col);
}

void getDirectionX () {
  int xVal = analogRead(X_PIN);
//  Serial.println(xVal);
  if (xVal >= 500) {
    xDir = "r";
  }
  if (xVal <= 330) {
    xDir = "l";
  }
  if (xVal > 330 && xVal < 500) {
    xDir = "n";
  } 
}

void getDirectionY () {
  int yVal = analogRead(Y_PIN);
  //  Serial.println(xVal);
  if (yVal >= 530) {
    yDir = "u";
  }
  if (yVal <= 337) {
    yDir = "d";
  }
  if (yVal > 337 && yVal < 530) {
    yDir = "n";
  } 
}

void getColour(){
  int cVal = digitalRead(COLOR_PIN);
  if (cVal != 0) {
    col = "c";
  } else {
    col = "n";
  }
  
}

void printFinalDirection (String x, String y, String col) {
  dir = x + y + col;
  Serial.println(dir);
}



