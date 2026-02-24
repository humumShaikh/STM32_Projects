//CWIR3

#include<Adafruit_SSD1306.h>

int x;

#define OLED_RESET -1

Adafruit_SSD1306 oled(OLED_RESET);

void setup(){
  Serial.begin(115200);
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
}

void loop(){
  x = 0;
  for(x=0;x<=100;x=x+1){
  oled.setTextColor(WHITE);
  oled.setTextSize(2);
  oled.setCursor(56,10);
  oled.println(x);
  oled.display();
  delay(100);
  oled.clearDisplay();
  }
  x = 100;
  for(x=100;x>=1;x=x-1){
      oled.setTextColor(WHITE);
  oled.setTextSize(2);
  oled.setCursor(56,10);
  oled.println(x);
  oled.display();
  delay(100);
  oled.clearDisplay();
  }  
 
}
