void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(9,INPUT);
}

double a[20]={0};
double b[20]={0};
double loopTime=0;

void loop() {
  
 if (digitalRead(10)==HIGH)
 {
  digitalWrite(13,HIGH);
  loopTime=micros();
  for(int i=0;i<20;i++)
  {
   while(analogRead(A1)<100)
    {
    a[i]=micros()-loopTime;
    }
   loopTime=micros();
  while(analogRead(A1)>100)
    {
    b[i]=micros()-loopTime;
    }
   loopTime=micros();
  }
  digitalWrite(13,LOW);
 }

 if(digitalRead(9)==HIGH)
 {
  digitalWrite(12,HIGH);
  for(int i=0;i<20;i++)
  {
   digitalWrite(11,LOW);
   delayMicroseconds(a[i]);
   digitalWrite(11,HIGH);
   delayMicroseconds(b[i]);
  } 
  digitalWrite(12,LOW);
 }

}
