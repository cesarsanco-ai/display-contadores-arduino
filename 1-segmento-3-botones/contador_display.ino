const int segPins[] = {2, 3, 4, 5, 6, 7, 8};
const int btnUP = 11;
const int btnDOWN = 12;
const int btnRESET = 13;

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
  pinMode(btnDOWN, INPUT_PULLUP);
  pinMode(btnRESET, INPUT_PULLUP);
}

void loop() {
  // Botón UP (verde)
  if (digitalRead(btnUP) == LOW) {
    delay(200);
    contador++;
    if (contador > 9) contador = 0;
    while(digitalRead(btnUP) == LOW);
  }
  
  // Botón DOWN (azul)
  if (digitalRead(btnDOWN) == LOW) {
    delay(200);
    contador--;
    if (contador < 0) contador = 9;
    while(digitalRead(btnDOWN) == LOW);
  }
  
  // Botón RESET (rojo)
  if (digitalRead(btnRESET) == LOW) {
    delay(200);
    contador = 0;
    while(digitalRead(btnRESET) == LOW);
  }
  
  // Mostrar número
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], digitos[contador][i]);
  }
}