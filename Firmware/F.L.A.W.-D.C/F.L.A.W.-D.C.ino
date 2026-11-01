

/*
README:
This code is not the original code. 
The purpose of this code is to test the Motor direction, speed and behavior.
Additionally, it reeds the signal provided by the Infrared Sensors and prints it out in serial monitor.
So that I can make further adjectments in the wiring and some adjustments in the original firmware.

*/

//-- Motor 1 
const int I1 = 0;
const int I2 = 0;
const int ena = 0;

//-- Motor 2
const int I3 = 0;
const int I4 = 0;
const int enb = 0;

//-- IR sensors
const int IR1 = 0;
const int IR2 = 0;
const int IR3 = 0;

int updateDelay = 5000;
int delaymotor = 5000;

void setup() {
  Serial.begin(115200);

  //-- Motors Output
  pinMode(I1, OUTPUT);
  pinMode(I2, OUTPUT);
  pinMode(ena, OUTPUT);

  pinMode(I3, OUTPUT);
  pinMode(I4, OUTPUT);
  pinMode(enb, OUTPUT);

  
  //-- IR Sensors signals
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
}

//-- To Test the signals recieved from the Ir sensors and adjust the code accordingly
void readPrintSignal(){
  analogRead(IR1);
  analogRead(IR2);
  analogRead(IR3);
  Serial.print("IR Sensor 1 Signal: ");
  Serial.println(analogRead(IR1));
  Serial.print("IR Sensor 2 Signal: ");
  Serial.println(analogRead(IR2));
  Serial.print("IR Sensor 3 Signal: ");
  Serial.println(analogRead(IR3));
}

//-- Motor rotation direction test
void runMotorLeft(){
  digitalWrite(I1, HIGH); // I may change this later if motor runs opposite direction
  digitalWrite(I2, LOW);
  analogWrite(ena, 255);

  delay(delaymotor);

  digitalWrite(I1, LOW);
  digitalWrite(I2, LOW);
  analogWrite(ena, 0);


}

void runMotorRight(){
  digitalWrite(I3, HIGH); // I may change this later if motor runs opposite direction
  digitalWrite(I4, LOW);
  analogWrite(enb, 255);

  delay(delaymotor);

  digitalWrite(I3, LOW);
  digitalWrite(I4, LOW);
  analogWrite(enb, 0);

}



void loop() {
  readPrintSignal();
  runMotorLeft();
  runMotorRight();
  delay(updateDelay);
}

