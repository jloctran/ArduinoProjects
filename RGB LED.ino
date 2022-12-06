//cycle through RGB lighting on a RGB LED 

#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  // put your setup code here, to run once:
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
  // put your main code here, to run repeatedly:
#define delayTime 5 //cycle time
redValue = 255; // start off with red
greenValue = 0;
blueValue = 0 ;

for(int i =0; i < 255; i += 1) // red value decreases while green value increases; light turns red to green
{
  redValue -=1;
  greenValue +=1;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  delay(delayTime);}
for(int i =0; i < 255; i += 1){// green value decreases while blue value increases; light turns green to blue
  greenValue -=1;
  blueValue +=1;
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}
 for(int i =0; i < 255; i += 1)//blue value decreases while red value increases; light turns blue back to red
 { blueValue -=1;
  redValue +=1;
  analogWrite(BLUE, blueValue);
  analogWrite(RED, redValue);
  delay(delayTime);
}
}
