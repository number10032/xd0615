int i=0;
void setup()
{
  for(i=2;i<10;i++)
  {	
    	pinMode(i,OUTPUT);
  }
  for(i=2;i<10;i++)
  {	
    	digitalWrite(i, LOW);
  }
}

void loop()
{
  for(i=2;i<10;i++)
  {	
   		digitalWrite(i, HIGH);
  		delay(100); // Wait for 1000 millisecond(s)
  		digitalWrite(i, LOW);
  		delay(100); // Wait for 1000 millisecond(s)
  }
  
}
