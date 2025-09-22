//week03_8_proccesing_mouse_serial_write_space
import processing.serial.*; //使用 Serial外掛
Serial myPort;
void setup(){
  size(400,400);
  myPort=new Serial(this,"COM7",9600);
}
void mousePressed(){
  if(mouseButton==LEFT)myPort.write('b'); //用USB傳字母'b'
  if(mouseButton==RIGHT)myPort.write(' '); //用USB傳字母'b'

}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
