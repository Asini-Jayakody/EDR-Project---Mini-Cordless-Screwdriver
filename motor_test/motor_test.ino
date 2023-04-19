int led = 12;
int in1 = 7;
int in2 = 8;
int pb1 = 9;
int pb2 = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pb1) && !digitalRead(pb2)){
    
  
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    
    
    
  }
    
    
  
  else if(digitalRead(pb2) && !digitalRead(pb1)){
    digitalWrite(in2,HIGH);
    digitalWrite(in1,LOW);
  }
      
  else{
    //display.clearDisplay();
    //display.display();
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
  }
  
}
