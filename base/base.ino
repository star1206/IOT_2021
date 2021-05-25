//base

#include <SimpleTimer.h>

SimpleTimer timer;

void setup() {

  Serial.begin(9600);
  
  led_digi_setup();
  led_anal_setup();
  sound_setup();
  ultra_setup();
  servo_setup();
  serial_setup();
  ultra_servo_setup();
  buzzer_setup();
}
void loop() {
  timer.run();
  //sound_loop();
  // ultra_loop();
  //ultra_servo_loop();
  //servo_loop();
  //  led_digi_loop();
  //  led_anal_loop();
  serial_loop();
  buzzer_loop();
}
