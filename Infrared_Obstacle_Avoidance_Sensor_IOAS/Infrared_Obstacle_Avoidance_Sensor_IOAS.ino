const byte sensorPin = 2;
const byte ledPin = 13;
int sensorState = 0;

void setup() {
  
  pinMode(ledPin, OUTPUT);  
  pinMode(sensorPin, INPUT); 
  
}

void loop() {
  
  sensorState = digitalRead(sensorPin); //read the state of the sensor value
  
  if(sensorState = HIGH){
    digitalWrite(ledPin, HIGH);
    
  }else{
    digitalWrite(ledPin, LOW);
  }
  
}
