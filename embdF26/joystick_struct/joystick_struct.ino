struct jstic { // works great for variables but not for functions.
  int x; 
  int y;
  bool btn; // button press
  bool dir; // "0" for left, "1" for right
} j[1];

void setup() {
  j[0].dir = 0;
  j[1].dir = 1;
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  j[0].x = analogRead(A0);
  j[0].y = analogRead(A1);
  j[0].btn = digitalRead(2);
  
  Serial.print(j[0].x);
  Serial.print("/");
  Serial.print(j[0].y);
  Serial.print("/");
  Serial.println(j[0].btn); 
}
