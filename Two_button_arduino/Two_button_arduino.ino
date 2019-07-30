//button_was_pressed

#define ACTIVATED LOW
const int button1 = 5;
const int button2 = 6;
const int messenger1 = 1;
const int messenger2 = 10;


int buttonState = 0;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(messenger, OUTPUT);
}

void loop()
{
  read_b( button1, messenger1);
  read_b( button2, messenger2);
}

void read_b(int a, int b) // a is the button and b is the messenger
{
   buttonState = digitalRead(a); // reads if button is pressed or not
  if (buttonState == ACTIVATED){
    digitalWrite(b, HIGH); // send out high aka 1 through messenger pin
  }
  else {
    digitalWrite(b, LOW); // send out low aka 0 through messenger pin
  }
}
