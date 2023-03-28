
int red_led =3;    // initialize digital pin. 
int yellow_led =5; 
int green_led =7; 
void setup()
{
  pinMode(red_led, OUTPUT); 
  pinMode(yellow_led, OUTPUT); 
  pinMode(green_led, OUTPUT);
}
void loop()
{
  digitalWrite(green_led, HIGH); // turn on green LED 
  delay(5000);       
  digitalWrite(green_led, LOW); // turn off green LED 
  for(int i=0;i<3;i++)      // blinks for 3 times
  {
    delay(500);    // wait 500ms 
    digitalWrite(yellow_led, HIGH); // turn on yellow LED 
    delay(500);          
    digitalWrite(yellow_led, LOW); // turn off yellow LED
  }
  delay(500);          
  digitalWrite(red_led, HIGH);// turn on red LED 
  delay(5000);       
  digitalWrite(red_led, LOW);// turn off red LED
}
