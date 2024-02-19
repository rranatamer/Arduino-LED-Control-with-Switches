int led1 =2;
int led2 =5;
int led4 =9;
int led6 =6;
int s1  =11;
int s2  =13;
int switch_state1;
int switch_state2;



void setup() {
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,INPUT);
  pinMode(13,INPUT);
}

void loop() {
  switch_state1=digitalRead(s1);
  switch_state2=digitalRead(s2);
  if(switch_state1==HIGH){
    analogWrite(led1,200);
    digitalWrite(led2,HIGH);
    
  }
else{
  analogWrite(led1,0);
    digitalWrite(led2,LOW);
   
}
 if (switch_state2==HIGH){
    analogWrite(led4,200);
    digitalWrite(led6,HIGH);
    
}
else{
   analogWrite(led4,0);
    digitalWrite(led6,LOW);
}
}