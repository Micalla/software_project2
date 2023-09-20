#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  delay(1000);
  count = 0;
  toggle = 0;
}

void loop() {
  while (count < 6) {
    if (toggle == 1) {
      digitalWrite(PIN_LED, 1);
      toggle = 0;
      count += 1;
    } else if (toggle == 0) {
      digitalWrite(PIN_LED, 0);
      toggle = 1;
    }
    delay(100);
  }
digitalWrite(PIN_LED, 1);
}
