  const int buttonPin = 3;
  const int LEDPin = 9;
  int LEDState = 0;
  int buttonNew;
  int buttonOld = 1;
  int dt = 100;

  void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
    pinMode(LEDPin, OUTPUT);
  }

  void loop() {
    buttonNew = digitalRead(buttonPin);
    if(buttonNew == 1 &&  buttonOld == 0){
      if(LEDState == 0){
        digitalWrite(LEDPin, HIGH);
        LEDState = 1;
      }
      else{
        digitalWrite(LEDPin, LOW);
        LEDState = 0;
      }
    }
    buttonOld = buttonNew;
   }
