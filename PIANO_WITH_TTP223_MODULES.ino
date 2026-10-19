// Define touch sensor input pins
const int saPin    = 2;
const int rePin    = 3;
const int gaPin    = 4;
const int maPin    = 5;
const int paPin    = 6;
const int dhaPin   = 7;
const int niPin    = 10; // New Ni/Me note pin
const int SAhiPin  = 9;

// Speaker pin
const int speakerPin = 8;

// Frequencies for Indian notes (approx.)
#define SA     261  // Sa (C4)
#define RE     293  // Re (D4)
#define GA     329  // Ga (E4)
#define MA     349  // Ma (F4)
#define PA     392  // Pa (G4)
#define DHA    440  // Dha (A4)
#define NI     493  // Ni (B4)
#define SA_HI  523  // High Sa (C5)

void setup() {
  // Set touch sensor pins as input
  pinMode(saPin, INPUT);
  pinMode(rePin, INPUT);
  pinMode(gaPin, INPUT);
  pinMode(maPin, INPUT);
  pinMode(paPin, INPUT);
  pinMode(dhaPin, INPUT);
  pinMode(niPin, INPUT);     // New
  pinMode(SAhiPin, INPUT);
}

void loop() {
  if (digitalRead(saPin) == HIGH) {
    tone(speakerPin, SA);
  } else if (digitalRead(rePin) == HIGH) {
    tone(speakerPin, RE);
  } else if (digitalRead(gaPin) == HIGH) {
    tone(speakerPin, GA);
  } else if (digitalRead(maPin) == HIGH) {
    tone(speakerPin, MA);
  } else if (digitalRead(paPin) == HIGH) {
    tone(speakerPin, PA);
  } else if (digitalRead(dhaPin) == HIGH) {
    tone(speakerPin, DHA);
  } else if (digitalRead(niPin) == HIGH) {
    tone(speakerPin, NI);      // New Ni sound
  } else if (digitalRead(SAhiPin) == HIGH) {
    tone(speakerPin, SA_HI);
  } else {
    noTone(speakerPin);  // Stop tone if no key is touched
  }
}



//Connections -
 
//TTP223 MODULES - 

//1. sa - 
//   VCC - VCC
//   GND - GND
//   OUT - D2

//2. re - 
//   VCC - VCC
//   GND - GND
//   OUT - D3

//3. ga - 
//   VCC - VCC
//   GND - GND
//   OUT - D4

//4. ma - 
//   VCC - VCC
//   GND - GND
//   OUT - D5

//5. pa - 
//   VCC - VCC
//   GND - GND
//   OUT - D6

//6. dha - 
//   VCC - VCC
//   GND - GND
//   OUT - D7

//7. ni - 
//   VCC - VCC
//   GND - GND
//   OUT - D10

//8. sa ( HIGH PITCH ) - 
//   VCC - VCC
//   GND - GND
//   OUT - D9

//Buzzer - 
//POSITIVE WIRE - D8
//NEGATIVE WIRE - GND
