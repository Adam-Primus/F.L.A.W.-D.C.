#include <iostream>;

const int M1 = 0;
const int M2 = 0;
const int IR1 = 0;
const int IR2 = 0;
const int IR3 = 0;

void setup() {
  serial.begin(115200);

  //-- Motors Output
  pinmode(M1, OUTPUT);
  pinmode(M2, OUTPUT);
  
  //-- IR Sensors signals
  pinmode(IR1, INPUT);
  pinmode(IR2, INPUT);
  pinmode(IR3, INPUT);
}

void loop() {

}
