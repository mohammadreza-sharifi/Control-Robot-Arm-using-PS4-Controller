#include<Servo.h>

Servo bottomServo;
Servo leftelbow;
Servo griper;
Servo rightelbow;

int inbyte = '0';

int bottomValue = 0;
int leftValue = 90;
int griperValue = 0;
int rightValue = 90;

void setup() {
  Serial.begin(9600);
  
  bottomServo.attach(6);
  leftelbow.attach(9);
  rightelbow.attach(10);
  griper.attach(11);
  
  bottomServo.write(0);
  leftelbow.write(90);
  rightelbow.write(90);
  griper.write(0);
}

void loop() {
  if(Serial.available()>0){
    inbyte = Serial.read();
    if(inbyte == 'r'){
      bottomValue = bottomValue - 10;
      bottomServo.write(bottomValue);
    }
    if(inbyte == 'l'){
      bottomValue = bottomValue + 10;
      bottomServo.write(bottomValue);
    }
    if(inbyte == 'u'){
      leftValue = leftValue + 10;
      leftelbow.write(leftValue);
    }
    if(inbyte == 'd'){
      leftValue = leftValue - 10;
      leftelbow.write(leftValue);
    }
    if(inbyte == 'g'){
      griperValue = 50;
      griper.write(griperValue);
    }
    if(inbyte == 'p'){
      griperValue = 0;
      griper.write(griperValue);
    }
    if(inbyte == 'z'){
      rightValue = rightValue + 10;
      rightelbow.write(rightValue);
    }
    if(inbyte == 'x'){
      rightValue = rightValue - 10;
      rightelbow.write(rightValue);
    }
  }
}
