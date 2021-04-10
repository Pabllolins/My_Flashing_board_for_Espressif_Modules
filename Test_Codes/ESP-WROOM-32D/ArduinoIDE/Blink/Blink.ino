
#define LED_BUILTIN 2

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  Serial.println("OLA EU SOU ESP-WROOM-32D");
  Serial.println("FUI GRAVADO E ESTOU COMUNICANDO!!");
  Serial.println();
  Serial.println();
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
