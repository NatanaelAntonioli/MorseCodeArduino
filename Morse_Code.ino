const int TAMANHO = 200;
const int CURTO = 200;
const int LONGO = 700;
const int DELAY = 500;
const int pino = 7;


char texto[TAMANHO] = "sos";

void setup() {
  // put your setup code here, to run once:
  pinMode (pino, OUTPUT);

  for (int i = 0; i < strlen(texto); i++){

    morse(texto[i]);
    delay(500);
  }

  
}

void ponto (){

    digitalWrite(pino, HIGH);
    delay (CURTO);
    digitalWrite(pino, LOW);
    delay (DELAY);
  
}

void traco(){

    digitalWrite(pino, HIGH);
    delay (LONGO);
    digitalWrite(pino, LOW);
    delay (DELAY);
  
}
  

void morse(char x){
  switch(x){
    case 'a':
      ponto();
      traco();
      break;
    case 'b':
      traco();
      ponto();
      ponto();
      ponto();
      break;
    case 'c':
      traco();
      ponto();
      traco();
      ponto();
      break;
    case 'd':
      traco();
      ponto();
      ponto();
      break;
    case 'e':
      ponto();
      break;
    case 'f':
      ponto();
      ponto();
      traco();
      ponto();
      break;
    case 'g':
      traco();
      traco();
      ponto();
      break;
    case 'h':
      ponto()
      ponto()
      ponto()
      ponto()
      break;
    case 'i':
      ponto()
      ponto()
      break;
    case 'j':
      ponto();
      traco();
      traco();
      traco();
      break;
    case 'k':
      traco();
      ponto();
      traco();
      break;
    case 'l':
      ponto();
      traco();
      ponto();
      ponto();
      break;
    case 'm':
      traco();
      traco();
      break;
    case 'n':
      traco();
      ponto();
      break;
    case 'o':
      traco();
      traco();
      traco();
      break;
    case 'p':
      ponto();
      traco();
      traco();
      ponto();
      break;
    case 'q':
      traco();
      traco();
      ponto();
      traco();
      break;
    case 'r':
      ponto();
      traco();
      ponto();
      break;
    case 's':
      ponto();
      ponto();
      ponto();
      break;
    case 't':
      traco();
      break;
    case 'u':
      ponto();
      ponto();
      traco();
      break;
    case 'v':
      ponto();
      ponto();
      ponto();
      traco();
      break;
    case 'w':
      ponto();
      traco();
      traco();
      break;
    case 'x':
      traco();
      ponto();
      ponto();
      traco();
      break;
    case 'y':
      traco();
      ponto();
      traco();
      traco();
      break;
    case 'z':
      traco();
      traco();
      ponto();
      ponto();
      break;
  }
}

void loop() {


}
