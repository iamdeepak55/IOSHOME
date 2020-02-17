void setup() {
  pinMode(D2,OUTPUT);
  Serial.begin(9600);   // initialize serial communication at 9600 BPS
}
void loop() {

  int sensorValue = analogRead(A0);   // read the input on analog pin 0

  float voltage = sensorValue * (5.0 / 1023.0);   // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)

  Serial.println(voltage);   // print out the value you read
  if (voltage>4.0)
  {
   digitalWrite(D2,HIGH);
   delay(2000);
  
  }
  else{
    digitalWrite(D2,LOW);
  }

}
