
const int pins[]={4,5,6,7};

void setup() {
  Serial.begin(9600);

  for(int i=4;i<=7;i++) pinMode(i, INPUT);

  delay(1000);
  
}

void loop() {
  byte b;

  b = 0;

  for(int i=4; i<=7; i++){
    if(digitalRead(i)) b |= 1<<(i-4);
  }

  Serial.write(b);

  
  
}
