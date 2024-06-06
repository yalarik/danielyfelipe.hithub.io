
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>
#include <analogWrite.h>
#define MOTOR1 4
#define MOTOR2 32
#define MOTOR3 27
#define MOTOR4 19

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);      // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("MATEO PAPI");       //set bluetooth name of your device
}

void loop() {
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("Up");
    analogWrite(MOTOR1, 255);
    analogWrite(MOTOR2, 255);
    analogWrite(MOTOR3, 255);
    analogWrite(MOTOR4, 255);
  }

 
  if (GamePad.isDownPressed())
  {
    Serial.print("Down");
    analogWrite(MOTOR1, 50);
    analogWrite(MOTOR2, 50);
    analogWrite(MOTOR3, 50);
    analogWrite(MOTOR4, 50);
  }

  
  
  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
    analogWrite(MOTOR1, 255);
    analogWrite(MOTOR2, 255);
    analogWrite(MOTOR3, 155);
    analogWrite(MOTOR4, 155);
  }

  
  
  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
    analogWrite(MOTOR1, 155);
    analogWrite(MOTOR2, 155);
    analogWrite(MOTOR3, 255);
    analogWrite(MOTOR4, 255);
  }

  
  
  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
    analogWrite(MOTOR1, 250);
    analogWrite(MOTOR2, 250);
    analogWrite(MOTOR3, 250);
    analogWrite(MOTOR4, 250);
  }

  
  
  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
  }
  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
  }
  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
  }

  
  
  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
    analogWrite(MOTOR1, 0);
    analogWrite(MOTOR2, 0);
    analogWrite(MOTOR3, 0);
    analogWrite(MOTOR4, 0);
  }

  
  
  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
  }
  Serial.print('\t');

  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
  Serial.println();
}