//2_button_bar

#define BLUE_b 2
#define RED_b 7
#define GREEN_b 4

#define BLUE 3
#define RED 5
#define GREEN 6

boolean gr_act = true;

int bt_timer;

void button_setup(){
  pinMode(BLUE_b, INPUT_PULLUP);
  pinMode(RED_b, INPUT_PULLUP);
  pinMode(GREEN_b, INPUT_PULLUP);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);

  bt_timer = timer.setInterval(300, button_loop);
  timer.disable(bt_timer);
}

void button_loop(){
/*  Serial.print("BLUE : ");
  Serial.println(digitalRead(BLUE_b));
  Serial.print("RED : ");
  Serial.println(digitalRead(RED_b));
  Serial.print("GREEN : ");
  Serial.println(digitalRead(GREEN_b)); */
    if(digitalRead(BLUE_b)==LOW){
      
    }
    
    if(digitalRead(GREEN_b)==LOW){
      if(gr_act == true){
        for(int i = 13; i>=8; i-=2){
          digitalWrite(i, HIGH);
        }
        for(int i = 12; i>=8; i-=2){
          digitalWrite(i,LOW);
        }
        gr_act = false;
      }
      else{
        for(int i = 13; i>=8; i--){
          digitalWrite(i, digitalRead(i)^1);
        }
      }
    }
    
  if(digitalRead(RED_b)==LOW){
    analogWrite(BLUE, random(0,255));
    analogWrite(GREEN, random(0,255));
    analogWrite(RED, random(0,255));
  }
  
}
