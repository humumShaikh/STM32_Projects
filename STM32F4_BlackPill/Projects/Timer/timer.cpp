//Written for STM32F411CEU6  Blackpill

unsigned long currentMillis;
unsigned long currentMillis2;

unsigned long previousMillis;
unsigned long previousMillis2;

const long interval = 1000;
const long interval2 = 2000;

int redLed;
int greenLed;

void setup(){
  previousMillis=0;
  previousMillis2=0;
  pinMode(PB1,OUTPUT);
  pinMode(PA2,OUTPUT);
}

void loop(){

  currentMillis = millis();
  currentMillis2 = millis();

  if(currentMillis-previousMillis>=interval){

    previousMillis = currentMillis;

    if(redLed==LOW){
      redLed = HIGH;
    }else{
      redLed=LOW;
    }
  }

  if(currentMillis2-previousMillis2>=interval2){

    previousMillis2=currentMillis2;

    if(greenLed==LOW){
      greenLed=HIGH;
    }else{
      greenLed=LOW;
    }
  }

  digitalWrite(PB1,redLed);
  digitalWrite(PA2,greenLed);
}
