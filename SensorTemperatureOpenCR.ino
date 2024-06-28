void setup() {
  Serial.begin(115200);
  Serial.setTimeout(3);
}

void loop() {
  double value = analogRead(A5);
  double voltage = value*3.3/1024;
  double R = 10.3*voltage/(5-voltage);
  double T = 3200/((3200/289) + log(R/10.3));
  Serial.print(T-273);

}
