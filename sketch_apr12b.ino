int valor=0;
int LED = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Prueba");
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor=analogRead(A0);

  if(valor > 500){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  
  Serial.println(valor);
}
