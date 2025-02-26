int led_green = 12;
int led_yellow = 11;
int led_red = 10;
void setup() {
    pinMode(led_red,OUTPUT);
    pinMode(led_yellow,OUTPUT);
    pinMode(led_green,OUTPUT);
}

void loop() {
  digitalWrite(led_green,HIGH);
  delay(3000);
  digitalWrite(led_green,LOW);
  digitalWrite(led_yellow,HIGH);
  delay(3000);
  digitalWrite(led_yellow,LOW);
  digitalWrite(led_red,HIGH);
  delay(3000);
  digitalWrite(led_red,LOW);
}
