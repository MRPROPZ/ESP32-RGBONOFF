#define R 23 //สีแดง
#define G 19 //สีเขียว
#define B 18 //สีฟ้า

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

}

// 1000 ms = 1 วินาที
void loop() {
  digitalWrite(G, HIGH); 
  delay(1000);
  digitalWrite(G, LOW);
  delay(1000);
  digitalWrite(B, HIGH);
  delay(1000);
  digitalWrite(B, LOW);
  delay(1000);
  digitalWrite(R, HIGH);
  delay(1000);
  digitalWrite(R, LOW);
  delay(1000);

}
