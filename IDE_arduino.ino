
int led = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    String command = Serial.readStringUntil('\n');
    command.trim();
    if(command == "ON"){
      digitalWrite(led, HIGH);
    }
    else if(command == "OFF"){
      digitalWrite(led, LOW);
    }
  }
  }

