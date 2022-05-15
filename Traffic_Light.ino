//VLSI group project
//19T6045 Prashant sahu
//19T6012 Arushi Sinha
//19T6013 Aum Mishra
//19T6082 Prerna Sharma


void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT); //RED
  pinMode(10,OUTPUT); //YELLOW
  pinMode(12,OUTPUT); //GREEN
}

void loop() {
  // put our main code here, to run repeatedly:

  digitalWrite(12,HIGH); // turn on green ligh for 3sec
  delay(3000);
  digitalWrite(12,LOW); // turn off green light 
  delay(500);

  //blink
  digitalWrite(12,HIGH); // turn on green light for .5sec ---1
  delay(500);
  digitalWrite(12,LOW); // turn off green light 
  delay(500);

  digitalWrite(12,HIGH); // turn on green light for .5sec ---2
  delay(500);
  digitalWrite(12,LOW); // turn off green light 
  delay(500);

  digitalWrite(12,HIGH); // turn on green light for .5sec ---3
  delay(500);
  digitalWrite(12,LOW); // turn off green light 
  delay(1000);

  digitalWrite(10,HIGH); // turn on yellow light for 1sec
  delay(2000);
  
  digitalWrite(10,LOW); // turn off yellow light 

  digitalWrite(8,HIGH); // turn on red ligh for 3sec
  delay(3000);
  digitalWrite(8,LOW); // turn off red light

  //traffic light
 }
