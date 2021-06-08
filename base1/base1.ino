


#include <SimpleTimer.h>

SimpleTimer timer;


void setup(){
  Serial.begin(9600);
  sound_setup();
 serial_setup();
  button_setup();
}

void loop(){
  //sound_loop();
  //button_loop();
  timer.run();
  serial_loop();
}
