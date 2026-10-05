int wpin = 13;
int gpin = 9;
int bpin = 6;
String colour;
String msg = "What colour do you want to light up? (w,g,b) ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(wpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(bpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0) {

  }
  colour = Serial.readString();

  if (colour == "w"){
    digitalWrite(wpin,HIGH);
    digitalWrite(gpin,LOW);
    digitalWrite(bpin,LOW);
  }

  if (colour == "g"){
    digitalWrite(gpin,HIGH);
    digitalWrite(bpin,LOW);
    digitalWrite(wpin,LOW);
  }

  if (colour == "b"){
    digitalWrite(bpin,HIGH);
    digitalWrite(gpin,LOW);
    digitalWrite(wpin,LOW);
  }
 
}
