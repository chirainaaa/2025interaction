//week03_5_pin2_Button_digitalRead_digitalWrite
//手動按鈕,看到燈慢慢改變now之後,把now變亮
void setup() {
  pinMode(2,INPUT_PULLUP);//按鈕Button 是2號,沒按下去,就會拉高
  for(int i=3;i<=13;i++){ //把pin 3,4,5...13,都設成OUTPUT
    pinMode(i,OUTPUT); //都是可以發光、發亮的
  }
}

int now=3; //現在發亮,是pin3
void loop() {
  if(digitalRead(2)==LOW){ //按下去囉!!
    now = now + 1;
    if(now>13) now = 3;
    for(int i=3;i<=13;i++){
      digitalWrite(i,LOW); //全部先清空 變成LOW不亮
    }
    digitalWrite(now,HIGH); //now 負責亮
    delay(500); //要休息一下,等0.5秒,才不會狂亂運作
  }
}
