# (To Control LED light from Laptop/Pc)

void setup()
{
pinMode(D4,OUTPUT);
}

void loop()
{
digitalWrite(D4,0);
delay(100);
digitalWrite(D4,1);
delay(100);
}
