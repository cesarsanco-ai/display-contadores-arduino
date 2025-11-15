const int segPins[] = {2, 3, 4, 5, 6, 7, 8};
const int btnUP = 11;


const byte digitos[10][7] = {
 {1,1,1,1,1,1,0}, // 0
 {0,1,1,0,0,0,0}, // 1
 {1,1,0,1,1,0,1}, // 2
 {1,1,1,1,0,0,1}, // 3
 {0,1,1,0,0,1,1}, // 4
 {1,0,1,1,0,1,1}, // 5
 {1,0,1,1,1,1,1}, // 6
 {1,1,1,0,0,0,0}, // 7
 {1,1,1,1,1,1,1}, // 8
 {1,1,1,1,0,1,1}  // 9
};


int contador = 0;


void setup() {
 for (int i = 0; i < 7; i++) {
   pinMode(segPins[i], OUTPUT);
 }
 pinMode(btnUP, INPUT_PULLUP);
}


void loop() {
 if (digitalRead(btnUP) == LOW) {
   delay(200);
   contador++;
   if (contador > 9) contador = 0;
   while(digitalRead(btnUP) == LOW);
 }
  for (int i = 0; i < 7; i++) {
   digitalWrite(segPins[i], digitos[contador][i]);
 }
}
