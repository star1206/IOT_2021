//1_led_digi

#define RED 13
#define GREEN 12

int led_digi_timer;

void led_digi_setup(){
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);

//  digitalWrite(RED, HIGH);
//  digitalWrite(GREEN, LOW);

  led_digi_timer = timer.setInterval(500, led_digi_loop);
  timer.disable(led_digi_timer);
}

void led_digi_loop(){
/*
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(500);
}
*/
digitalWrite(RED, digitalRead(RED)^1);
digitalWrite(GREEN, digitalRead(GREEN)^1);
//  delay(500);
}
