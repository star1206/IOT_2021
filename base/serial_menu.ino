//serial.menu

int input_menu = 0;

void serial_setup(){
  show_menu();
}

void serial_loop(){
  if(Serial.available()>0){
    input_menu = Serial.read();

    if(input_menu != char(10)){
      Serial.print("사용자 선택 : ");
      Serial.println(char(input_menu));
    }

    switch(input_menu){
      case '1' : 
        timer.enable(led_digi_timer);
        digitalWrite(RED, HIGH);
        timer.disable(led_anal_timer);
        analogWrite(YELLOW, 0);
        i = 0;
        timer.disable(sound_timer);
        timer.disable(ultra_timer);        
        timer.disable(servo_timer); 
         timer.disable(buzzer_timer);
        servo.detach();     
        break;
        
       case '2' : 
        timer.disable(led_digi_timer);
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, LOW);
        timer.enable(led_anal_timer);
        timer.disable(sound_timer); 
        for(int i=7; i<=13; i++){
        digitalWrite(i, LOW);
        }
        timer.disable(ultra_timer);    
          timer.disable(buzzer_timer);   
        break;

        case '3' : 
        timer.disable(led_digi_timer);
        //digitalWrite(RED, LOW);
        //digitalWrite(GREEN, LOW);
        timer.disable(led_anal_timer);
        timer.enable(sound_timer);
        for(int i=7; i<=13; i++){
        digitalWrite(i, LOW);
        }
        timer.disable(ultra_timer);       
        timer.disable(servo_timer);   
        timer.disable(buzzer_timer);
        servo.detach();    
        break;

        case '4' : 
        timer.disable(led_digi_timer);
        //digitalWrite(RED, LOW);
        //digitalWrite(GREEN, LOW);
        timer.disable(led_anal_timer);
        timer.disable(sound_timer);
        for(int i=7; i<=13; i++){
          digitalWrite(i, LOW);
        }
        timer.enable(ultra_timer);
        timer.disable(servo_timer); 
         timer.disable(buzzer_timer);
        servo.detach();   
        break;

        break;

        case '5' : 
        timer.disable(led_digi_timer);
        //digitalWrite(RED, LOW);
        //digitalWrite(GREEN, LOW);
        timer.disable(led_anal_timer);
        timer.disable(sound_timer);
        for(int i=7; i<=13; i++){
          digitalWrite(i, LOW);
        }
        timer.disable(ultra_timer);
        servo.attach(servo_pin);
        timer.enable(servo_timer);
          timer.disable(buzzer_timer);
        break;

        case '6' : 
        timer.disable(led_digi_timer);
        //digitalWrite(RED, LOW);
        //digitalWrite(GREEN, LOW);
        timer.disable(led_anal_timer);
        timer.disable(sound_timer);
        for(int i=7; i<=13; i++){
          digitalWrite(i, LOW);
        }
        timer.disable(ultra_timer);
        servo.detach();
        timer.disable(servo_timer);
        timer.enable(buzzer_timer);    
        break;

        case '9' : 
        timer.disable(led_digi_timer);
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, LOW);
        timer.disable(led_anal_timer);
        analogWrite(YELLOW, 0);
        i = 0;
        timer.disable(sound_timer);
        for(int i=7; i<=13; i++){
          digitalWrite(i, LOW);
        }
        timer.disable(servo_timer); 
        timer.disable(buzzer_timer);
        servo.detach();   
        show_menu();
        break;

       case char(10):
        break;

        default :
         Serial.println("1~2까지 입력하세요.");
    }
  }
}

void show_menu(){
  Serial.println("1. Digital Control LED");
  Serial.println("2. Analog Control LED");
  Serial.println("3. Sound LED Control");
  Serial.println("4. Ultra Sensor Control");
  Serial.println("5. Servo Control");  
  Serial.println("6. Buzzer Control");
  Serial.println("9. All Stop");
}
