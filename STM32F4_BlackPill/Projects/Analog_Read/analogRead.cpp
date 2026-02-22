//CWIR3
//Basic analog read on the STM32F411CEU6

int sensePin = PA0;

void setup(){
  while(Serial.available()==0){

  }
  Serial.begin(115200);
  Serial.println("Initialized");
  pinMode(sensePin,INPUT);
}

void loop(){
  Serial.println(analogRead(sensePin));
  delay(300);
}
