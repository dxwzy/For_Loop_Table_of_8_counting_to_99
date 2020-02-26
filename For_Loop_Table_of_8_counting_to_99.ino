void setup() {
  Serial.begin(115200);
}

void loop() {
  int z = 0; 
  while(z<100){
  Serial.println(z);
  z = z+8;
  if (z>96){
    z=99; 
    Serial.println(z);
    break;

}
delay(500);
}
}
