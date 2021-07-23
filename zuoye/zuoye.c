#include<MsTimer2.h>
int t=0,a=0,b=0;
void onTimer()
{
  t++;
  if(t>99)
    t=0;  
}
void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
}

void loop()
{
  if(digitalRead(3)==HIGH)
    t=0;
  digitalWrite(13,HIGH);
  digitalWrite(2,LOW);
  a=t%10;
  b=t/10;
  digitalWrite(5,(a&0x1));
  digitalWrite(6,((a>>1)&0x1));
  digitalWrite(7,((a>>2)&0x1));
  digitalWrite(8,((a>>3)&0x1));
  digitalWrite(9,(b&0x1));
  digitalWrite(10,((b>>1)&0x1));
  digitalWrite(11,((b>>2)&0x1));
  digitalWrite(12,((b>>3)&0x1));
}
