int reading = HIGH
int irsensor1 (8);
int irsensor2 (9);
int irsensor3 (10);
int irsensor4 (11);
int led (13);


void setup()
{
	pinMode(irsensor1, INPUT);
	pinMode(irsensor2, INPUT);
	pinMode(irsensor3, INPUT);
	pinMode(irsensor4, INPUT);
	pinMode(led, OUTPUT);
}

void loop()
{

  detection = digitalRead(IR);	

}