
import processing.serial.*;

int rectX, rectY;      // Position of buzz button
int rectSize = 90;     // Diameter of rect
color rectColor;
color rectHighlight;

boolean rectOver = false;
boolean ledState = false;

Serial myPort; 


void setup() {
  size(320, 200);
  rectColor = color(0);
  rectHighlight = color(51);
  rectX = width/2-rectSize-10;
  rectY = height/2-rectSize/2;
  myPort = new Serial(this, Serial.list()[0], 9600);
}

void draw() {
  update(mouseX, mouseY);
  fill(127, 127, 127);
  stroke(255);
  rect(rectX, rectY, rectSize, rectSize);
  textSize(32);
  fill(255, 0, 0);
  text("RED", rectX+15, rectY+60);
}

void update(int x, int y) {
  rectOver = overRect(rectX, rectY, rectSize, rectSize);
}

void mousePressed() {
  if (rectOver) {
    if (ledState) {
      myPort.write("r");
      ledState = false;
    }
    else {
     myPort.write("R");
     ledState = true;
    }
  }
}

boolean overRect(int x, int y, int width, int height)  {
  if (mouseX >= x && mouseX <= x+width && 
      mouseY >= y && mouseY <= y+height) {
    return true;
  } else {
    return false;
  }
}

