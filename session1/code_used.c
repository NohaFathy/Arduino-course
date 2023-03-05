int redPin = 9;    // connect the red pin of RGB LED to pin 9 of the Arduino
int greenPin = 10;  // connect the green pin of RGB LED to pin 10 of the Arduino
int bluePin = 11;   // connect the blue pin of RGB LED to pin 11 of the Arduino

void setup() {
  pinMode(redPin, OUTPUT);      // set the red pin as output
  pinMode(greenPin, OUTPUT);    // set the green pin as output
  pinMode(bluePin, OUTPUT);     // set the blue pin as output

}
void loop() {
 
  //black light
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(2500);

  //red
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(2500);
  //green
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(2500);

  //yellow
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(2500);
 
  //violet
  analogWrite(redPin, 148);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 211);
  delay(2500);

  //blue
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(2500);

  //cyan
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(2500);

  //white
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(2500);
}


