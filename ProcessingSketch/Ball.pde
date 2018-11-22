class Ball {
  float xBall;
  float yBall;
  float xSpeed;
  float ySpeed;
  float diameter;
  color col;

  Ball() {
    xBall = 200;
    yBall = 200;
    xSpeed = 10;
    ySpeed = 10;
    diameter = 40;
    col = color(255, 0, 0);
  }

  void displayBall() {
    background(80);
    fill(col);
    stroke(0);
    ellipse(xBall, yBall, diameter, diameter);
  }

  void moveBall(String dir) {
    if ((dir.charAt(0) == 'n') && (dir.charAt(1) == 'n') && (dir.charAt(2)=='n')) {
      return;
    }

    if (dir.charAt(2) == 'c') {
      //col = color(random(255), random(255), random(255)) ;
      //delay(25);
    }

    if (dir.charAt(0) == 'r') {
      xBall = xBall + xSpeed;
    }
    if (dir.charAt(0) == 'l') {
      xBall = xBall - xSpeed;
    }
    if (dir.charAt(1) == 'u') {
      yBall = yBall - ySpeed;
    }
    if (dir.charAt(1) == 'd') {

      yBall = yBall + ySpeed;
    }


    //if (dir.charAt(0) != 'n') {
    //  if (dir.charAt(0) == 'r') {
    //    xBall = xBall + xSpeed;
    //  } else {
    //    xBall = xBall - xSpeed;
    //  }
    //}

    //if (dir.charAt(1) != 'n') {
    //  if (dir.charAt(0) == 'u') {
    //    yBall = yBall + ySpeed;
    //  } else {
    //    yBall = yBall - ySpeed;
    //  }
  }
}