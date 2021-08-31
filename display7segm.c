int pin_a = 2;
int pin_b = 3;
int pin_c = 4;
int pin_d = 5;
int pin_e = 6;
int pin_f = 7;
int pin_g = 8;


void setup()
{
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
}

void loop()
{
  digitalWrite(pin_a, HIGH);
  delay(500);
  digitalWrite(pin_b, HIGH);
  delay(500);
  digitalWrite(pin_c, HIGH);
  delay(500);
  digitalWrite(pin_d, HIGH);
  delay(500);
  digitalWrite(pin_e, HIGH);
  delay(1000);
  digitalWrite(pin_f, HIGH);
  delay(1000);
  digitalWrite(pin_g, HIGH);
  delay(1000);
}