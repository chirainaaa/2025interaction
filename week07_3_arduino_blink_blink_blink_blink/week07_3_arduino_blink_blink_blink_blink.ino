//week07_3_arduino_blink_blink_blink_blink
void setup() {
  pinMode(10,OUTPUT); //把第10支腳,能送出資料 OUTPUT  
  pinMode(11,OUTPUT); //把第11支腳,能送出資料 OUTPUT
  pinMode(12,OUTPUT); //把第12支腳,能送出資料 OUTPUT
  pinMode(13,OUTPUT); //把第13支腳,能送出資料 OUTPUT
}

void loop() {
  for(int i=10;i<=13;i++){
    digitalWrite(16,LOW); //暗掉
    digitalWrite(i-1,LOW); //發亮
    digitalWrite(i,HIGH); //暗掉
    delay(500);    
  }
}