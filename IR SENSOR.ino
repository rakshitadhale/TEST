int ir_sensor=8;
void setup() {
  // put your setup code here, to run once:
pinMode(ir-_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=digitalRead(ir_sensor);
Serial.println(data);
}
