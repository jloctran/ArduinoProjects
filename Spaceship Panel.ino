int switchState = 0; //introduce initial switch state

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT); //pin3 is an output green LED
pinMode(4,OUTPUT); //pin4 is an output red LED1
pinMode(5,OUTPUT); //pin5 is an output red LED2
pinMode(2,INPUT); //pin2 is the input switch
}

void loop() {
  // put your main code here, to run repeatedly:
switchState = digitalRead(2); // have the program read the state of pin 2 and set it to switchstate. reads high if button is pressed,
// reads low if button is not pressed
if (switchState == LOW) { // if button is not pressed
digitalWrite(3, HIGH); // turn green LED on
digitalWrite(4, LOW); // red LED1 off
digitalWrite(5,LOW);
} //  red LED2 off

else  {// if button is pressed
digitalWrite(3, LOW); //green LED off

//synced red LEDs blinking
delay(250); // delay .25s
digitalWrite(4,HIGH); // keep red LED1 on
digitalWrite(5,HIGH); // keep red LED2 on
delay(250);
digitalWrite(4,LOW); // turn red LED1 off
digitalWrite(5,LOW); // turn red LED2 off
delay(250);

//alternating red LEDS blinking - add// to lines 25-31 and remove // from lines 34-40
//delay(250); // delay .25s
//digitalWrite(4,low); // turn red LED1 off
//digitalWrite(5,HIGH); // keep red LED2 on
//delay(250);
//digitalWrite(4,HIGH); // keep red LED1 on
//digitalWrite(5,LOW); // turn red LED2 off
//delay(250);
}
}