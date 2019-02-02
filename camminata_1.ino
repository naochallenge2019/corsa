const int echo_1 = 2;
const int trig_1 = 3;
const int echo_2 = 6;
const int trig_2 = 7;
const int threshold = 10; //distanza in cm oltre la quale nao deve raddrizzarsi

void setup() {

  Serial.begin(9600);
  pinMode(echo_1, INPUT);
  pinMode(trig_1, OUTPUT);
  pinMode(echo_2, INPUT);
  pinMode(trig_2, OUTPUT);
}

void loop(){
  
  digitalWrite(trig_1, LOW);
  //digitalWrite(trig_2, LOW);
  digitalWrite(trig_1, HIGH);
  //digitalWrite(trig_2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_1, LOW);
  //digitalWrite(trig_2, LOW);
  long durata_1=pulseIn(echo_1, HIGH);
  //long durata_2=pulseIn(echo_2, HIGH);
  long distanza_1=0.034*durata_1/2;  
  //long distanza_2=0.034*durata_2/2;
  //Serial.print("sensore 1: ");
  //Serial.println(distanza_1); //provare serial.write
  if(distanza_1>Treshold){
  
  Serial.print("a"); // o Serial.write(), vedremo lunedì
  }
  
  digitalWrite(trig_2, LOW);
  digitalWrite(trig_2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_2, LOW);
  long durata_2=pulseIn(echo_2, HIGH);
  long distanza_2=0.034*durata_2/2;
  if(distanza_2 < threshold){
  
  Serial.print("b");
  }
  delay(500);
  
  
}
