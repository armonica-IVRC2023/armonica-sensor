// 必要なライブラリをインクルード
#include <ESP8266WiFi.h>

// アナログ入力ピン
const int analogInputPin = A0;

void setup() {
  // シリアル通信の初期化
  Serial.begin(9600);
}

void loop() {
  // アナログ入力値を読み取る
  int analogValue = analogRead(analogInputPin);
  Serial.print(0);
  Serial.print(" ");
  Serial.println(analogValue);

  delay(100);
}
