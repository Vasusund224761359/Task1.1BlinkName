
const int ledPin = 13;  

const int dotDuration = 200;  
const int dashDuration = 600; 
const int gapDuration = 200;  
const int letterGap = 600;    
// array of 26 characters storing the morse code of each of the letters.
const String morseCode[26] = {
  ".-",   // A
  "-...", // B
  "-.-.", // C
  "-..",  // D
  ".",    // E
  "..-.", // F
  "--.",  // G
  "....", // H
  "..",   // I
  ".---", // J
  "-.-",  // K
  ".-..", // L
  "--",   // M
  "-.",   // N
  "---",  // O
  ".--.", // P
  "--.-", // Q
  ".-.",  // R
  "...",  // S
  "-",    // T
  "..-",  // U
  "...-", // V
  ".--",  // W
  "-..-", // X
  "-.--", // Y
  "--.."  // Z
};

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  String word = "VASU";  
  transmitMorse(word);   
  delay(letterGap * 2);  
}

// Function to transmit a word in Morse code
void transmitMorse(String word) {
  for (int i = 0; i < word.length(); i++) {
      String code = morseCode[letter - 'A'];  
      transmitLetter(code);                   
      delay(letterGap);                      
  }
}

void transmitLetter(String code) {
  for (int i = 0; i < code.length(); i++) {
    if (code[i] == '.') {
      dot();  
    } else if (code[i] == '-') {
      dash(); 
    }
    delay(gapDuration);  
  }
}


void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotDuration);
  digitalWrite(ledPin, LOW);
}


void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashDuration);
  digitalWrite(ledPin, LOW);
}
