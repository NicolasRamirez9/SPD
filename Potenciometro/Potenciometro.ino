float voltaje;
float voltaje255;

void setup()
{
  pinMode(-9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  voltaje = analogRead(A0);
  Serial.println(voltaje);
  voltaje255=map(voltaje,0,1023,0,255);
  
  analogWrite(10,voltaje255);
  
  analogWrite(9,voltaje/4);
  if(voltaje255<100)
    analogWrite(10,voltaje255);
  else
    analogWrite(10,0);
  
  if (voltaje255>200)
    analogWrite(11,voltaje255);
  else
    analogWrite(11,0);
  
  analogWrite(13,250);
  
}
