#define PIN_LED 13  
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT); 
  Serial.begin(115200);  
  Serial.println("Hello World!");  
  count = toggle = 0;  // 초기화
  digitalWrite(PIN_LED, LOW);  // LED 꺼둠
}

void loop() {
  Serial.println(++count); 
  toggle = toggle_state(toggle); 
  digitalWrite(PIN_LED, toggle);  // LED 상태 갱신
  delay(1000);  // 1초 대기
}

int toggle_state(int toggle) {
  return !toggle;  // 반대 값을 반환
}
