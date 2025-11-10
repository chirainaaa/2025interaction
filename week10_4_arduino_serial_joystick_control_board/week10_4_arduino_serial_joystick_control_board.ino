//week10_4_arduino_serial_joystick_control_board
//修改自week10_3_arduino_analogRead_A3
//把 joystick 的 Y 的線,經由麵包版幫忙,接到 MakerUNO A3
//(不能接其他的,因為要接有~小蟲符號的,代表analog訊號)
void setup() {
  Serial.begin(9600); //開啟 USB 傳輸
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);  //發出聲音
}

void loop() { //一秒鐘,會跑 1000 HZ ,太快了,要慢一點點才行
  delay(100); //慢一點,避免 Processing 來不及處理,眼睛看不到
  int now = analogRead(A3);
  Serial.println(now);
  //想利用 serial Monitor 來看看會送出什麼訊號

  if(now > 800){   //變高
    tone(8,523,100); //發出 523 的 Do
    delay(100);
    tone(8,784,100);  //發出 784 的 So
    delay(100);
  }else if(now < 200){ //變低
    tone(8,784,100); //發出 523 的 Do
    delay(100);
    tone(8,523,100);  //發出 784 的 So
    delay(100);
  }
}
