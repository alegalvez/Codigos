
int led = 11;
int x = A0;

void setup() 
{
  pinMode(led,OUTPUT);
}

void loop() 
{
 int reading = analogRead (x);
 reading = map(reading,0,1024,0,255);
 analogWrite(led,reading); 
}
