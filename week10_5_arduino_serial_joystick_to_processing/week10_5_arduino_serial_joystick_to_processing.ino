//week10_5_arduino_serial_joystick_to_processing
//修改自week10_4_arduino_serial_joystick_control_board
//但是不使用serial.println() 要改用serail.write() 0-1023 vs. 0-255 差4倍
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() {
  delay(30);
  int now = analogRead(A3) / 4; //要除以4,才能順利由serial.write()
  Serial.write(now); //把0-255的數值送出去
  if(now > 200) tone(8,784,100);
  if(now < 50) tone(0,523,100);
}