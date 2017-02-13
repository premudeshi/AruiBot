int motor1A = 6;
int motor1B = 7;
int motor2A = 8;
int motor2B = 9;


void setup()
{
	pinMode(motor1A, OUTPUT);
	pinMode(motor2A, OUTPUT);
	pinMode(motor1B, OUTPUT);
	pinMode(motor2B, OUTPUT);
}

void loop()
{
drive();
delay(5000);
stop();
delay(5000);
	
}

void drive()
{
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void stop()
{
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
