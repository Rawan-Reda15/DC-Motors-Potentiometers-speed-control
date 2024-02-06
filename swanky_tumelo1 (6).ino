int green1=10;
int green2=6;
int red1=5;
int red2=9;
int button1=11;
int button2=12;
int counter=0;

void setup()
{ 
  pinMode(red1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(red1,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  
}
void loop()
{
 
 
  {counter++;
   switch(counter){
     case 1: if(digitalRead(button1)==HIGH){
     analogWrite(green1,100);
     digitalWrite(red1,HIGH);}
     else{
       digitalWrite(green1,LOW);
      digitalWrite(red1,LOW);
     }
  break;
     case 2:  if(digitalRead(button2)==HIGH)
     {analogWrite(green2,255);
      digitalWrite(red2,HIGH);}
     else{digitalWrite(green2,LOW);
      digitalWrite(red2,LOW);}
}
}
}

