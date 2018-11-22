import processing.serial.*;
Serial port;
Ball ball = new Ball();
String dir = "nn";

void setup() {
  
  fullScreen();
  port = new Serial(this, "COM5", 19200);
  port.bufferUntil('\n');
  delay(2000);
  
}

void draw() {
  
  ball.displayBall();
  println(dir);
  ball.moveBall(dir);
  
}

void serialEvent (Serial port) {
  dir = port.readStringUntil(10);
}