int k = 2;
int s = 3;
int y = 4;

void setup()
{
    pinMode(k, OUTPUT);
    pinMode(s, OUTPUT);
    pinMode(y, OUTPUT);
}
void loop()
{
    digitalWrite(k, 1);
    digitalWrite(s, 0);
    digitalWrite(y, 0);
    delay(1000);
    digitalWrite(s, 1);
    delay(1000);
    digitalWrite(k, 0);
    digitalWrite(s, 0);
    digitalWrite(y, 1);
    delay(1000);
    digitalWrite(s, 1);
    digitalWrite(y, 0);
    delay(1000);
}