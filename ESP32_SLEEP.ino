void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n I2C Scanner By Banpot Electronics Supply");
  pinMode(33, INPUT);
//  esp_deep_sleep_enable_ext0_wakeup((gpio_num_t)33, LOW);
//  esp_deep_sleep_enable_timer_wakeup(10 * 60 * 1000 * 1000); // กำหนดให้ตื่นเมื่อครบ 10 นาทีข้างหน้า
  
  pinMode(4,OUTPUT);
  pinMode(21,OUTPUT);
  pinMode(22,OUTPUT);
  digitalWrite(4, 0);
  digitalWrite(21, 0);
  digitalWrite(22, 0);
  Serial.println("Startting...");
  esp_deep_sleep_start();
}

void loop() {
  // put your main code here, to run repeatedly:
//    Serial.println("OFF...");
//    digitalWrite(21, 0);
//    digitalWrite(22, 0);
//    delay(2000);
//    Serial.println("ON...");
//    digitalWrite(21, 1);
//    digitalWrite(22, 1);
//    delay(2000);
}
