
int readLevel= A0;//ds18b20
int buzzer=D2 ;

char timestamp[10];

void setup() 
{
  pinMode(buzzer, OUTPUT);
    
  Serial.begin(115200);     //(19200,SERIAL_8E1) - data size = 8 bits , parity = Even , stop bit =  1bit
 
 
 
}

void loop() 
{

  int l = analogRead(readLevel);
{
 

    
    Serial.println("water level");
    Serial.println(l);
    if( l>=50)
        {
           digitalWrite(buzzer, HIGH);
           delay(2000);
            
        }
    else 
      {
         digitalWrite(buzzer, LOW);
      }     
delay(1000);

}
}
