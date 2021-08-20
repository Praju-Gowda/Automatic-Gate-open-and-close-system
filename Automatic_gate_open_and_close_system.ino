int a; // variable for sensor value storage
int pir=7; // pir sensor pin
int greenled=13; //green led pin
int redled=2; //redledpin
int in1=3; // motordriver in1
int in2=4; // motordriver in2
void setup() {
  pinMode(greenled,OUTPUT);
  pinMode(redled,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  Serial.begin(9600); // initializing serial baudrate value
  // put your setup code here, to run once:

}

void loop() {
  a=digitalRead(pir); // reading the value from pir sensor
  Serial.println(a); // printing pir value 0 or 1
  if(a==1)           // comparing a (pir value) with 1
  {
  Serial.println("detected"); // pir status
  digitalWrite(greenled,HIGH); // greenled output on
  digitalWrite(redled,LOW); // redled output off
  digitalWrite(in1,HIGH); // motor on forward
   digitalWrite(in2,LOW);// motor off reverse direction
delay(2000); // delay 
}
  else
  {
     Serial.println(" not detected"); // pir status
  digitalWrite(greenled,LOW); // greenled output on
  digitalWrite(redled,HIGH); // redled output off
  digitalWrite(in1,LOW); // motor on forward
   digitalWrite(in2,LOW);// motor off reverse direction
delay(2000); // delay 
    
  }
  
  // put your main code here, to run repeatedly:

}
