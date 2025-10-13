//week06_1_sound_library_SoundFile_play

import processing.sound.*;//使用聲音外掛模組
SoundFile sound; //宣告SoundFile 物件變數
void setup(){
  size(500,400);//視窗大小
  sound = new SoundFile(this,"music.mp3");//把音樂拉到程式裡
  sound.play();
}
void draw(){
  
}
