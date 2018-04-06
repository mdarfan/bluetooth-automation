int led=2;



char val;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

  

}

void loop() {
  if(Serial.available()>0)
  {val=Serial.read();
  Serial.println(val);
  if(val=='A')
  {
    digitalWrite(led,HIGH);
    Serial.println("on");

  }
  if(val=='B')
  {
    digitalWrite(led,LOW);
    Serial.println("off");

 
  }

 
  }
}
