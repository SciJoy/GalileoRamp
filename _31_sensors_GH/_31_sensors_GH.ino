/*  
Building an Absolute Encoder
http://youtu.be/j8rG3bjqriI - Encoder Basics
https://youtu.be/LjY1PSd8w2E -How to Build and Encoder
https://youtu.be/CM0GePGEtrs -How to Program the Encoder
This code is for an absolute encoder. It reads the state of three break beam, 
compares the three readings, and outputs the location of the encoder.
To learn more, visit www.scijoy.community.  
Released under the Creative Commons Attribution 4.0 license.
December 26, 2016
 */

///BB
const int sensorPins[]={22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
int states[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
const int distance [] ={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60};

void setup() {


///BB
for (int i=0; i <31; i++){
      pinMode(sensorPins[i], INPUT);
  digitalWrite(sensorPins[i], HIGH);
 }

  Serial.begin(9600);  //Start serial communicaiton

}

void loop(){

 for (int j=0; j <31; j++){
     states[j]=digitalRead(sensorPins[j]);
 /* Serial.print(sensorPins[j]);
      Serial.print(", ");
  Serial.println(states[j]); */
    
   if (states[j] == 0) {
      Serial.print(millis());
      Serial.print(", ");
      Serial.println(distance[j]);}

 }}

   

