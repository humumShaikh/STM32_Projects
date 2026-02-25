//CWIR3

#include<Adafruit_SSD1306.h>

#define OLED_RESET -1

Adafruit_SSD1306 oled(OLED_RESET);

void setup(){
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
}

void loop(){
  oled.setTextColor(WHITE);
  oled.setTextSize(2);
  oled.setCursor(34,8);
  oled.println("HUMAN");
  oled.display();
  oled.clearDisplay();
}
