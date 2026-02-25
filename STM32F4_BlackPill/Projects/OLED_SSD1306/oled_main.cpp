//CWIR3
//written for STM32F411CEU6 Blackpill and SSD1306 driver based 0.96" i2c OLED

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
