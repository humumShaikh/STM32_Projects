//CWIR3

int code;

void setup(){
  Serial.begin(115200);
  while(Serial.available()==0){
  
  }
  Serial.println("Initialized");
  pinMode(PB1,OUTPUT);
}

void loop(){

  while(Serial.available()==0){

  }
  code = Serial.parseInt();

  if(code==69){
    digitalWrite(PB1,HIGH);
  }
  if(code==66){
    digitalWrite(PB1,LOW);
  }
}
