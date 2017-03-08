const int x_axis = A0;
const int y_axis = A1;
const int swbutton = 1; //Switch button 
int xpos = 0;
int ypos = 0;
int swstate = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(x_axis, INPUT);
pinMode(y_axis, INPUT);
pinMode(swbutton, INPUT_PULLUP)

}

void loop() {
  // put your main code here, to run repeatedly:
xpos = analogRead(x_axis);
ypos = analogRead(y_axis);
swstate = digitalRead(swbutton);
Serial.print("X: ");
Serial.print(xPosition);
Serial.print(" | Y: ");
Serial.print(yPosition);
Serial.print(" | Button: ");
Serial.println(buttonState);

delay(100); // add some delay between reads

}
