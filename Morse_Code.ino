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

  if (x == 'a'){


  ponto();
  traco();
    
  }

  if (x == 'b'){

  traco();
  ponto();
  ponto();
  ponto();
   
  }
  
  if (x == 'c'){

  traco();
  ponto();
  traco();
  ponto();
   
  }



   if (x == 'd'){

  traco();
  ponto();
  ponto();
     
  }
  
  if (x == 'e'){

  ponto();
     
  }

  if (x == 'f'){

  ponto();
  ponto();
  traco();
  ponto();
     
  }

  if (x == 'g'){

  traco();
  traco();
  ponto();
     
  }

  if (x == 'h'){

    ponto();
    ponto();
    ponto();
    ponto();
    
  }

  if (x == 'i'){

    ponto();
    ponto();
    
  }

  if (x == 'j'){

    ponto();
    traco();
    traco();
    traco();
    
  }

  if (x == 'k'){

    traco();
    ponto();
    traco();
    
  }

  if (x == 'l'){

    ponto();
    traco();
    ponto();
    ponto();
    
  }

  if (x == 'm'){

    traco();
    traco();
    
  }

  if (x == 'n'){

    traco();
    ponto();
    
  }

  if (x == 'o'){
    
  traco();
  traco();
  traco();
    
  }

  if (x == 'p'){

    ponto();
    traco();
    traco();
    ponto();
  }

  if (x == 'q'){

    traco();
    traco();
    ponto();
    traco();
     
  }

  if (x == 'r'){

    ponto();
    traco();
    ponto();
    
  }
  
  if (x == 's'){
    
  ponto();
  ponto();
  ponto();
    
  }

  if (x == 't'){

    traco();
  }

  if (x == 'u'){

    ponto();
    ponto();
    traco();
    
  }

  if (x == 'v'){

    ponto();
    ponto();
    ponto();
    traco();
    
  }

  if (x == 'w'){

    ponto();
    traco();
    traco();
  }

  if (x == 'x'){

    traco();
    ponto();
    ponto();
    traco();
    
  }

  if (x == 'y'){

     traco();
     ponto();
     traco();
     traco();
  }

  if (x == 'z'){

    traco();
    traco();
    ponto();
    ponto();
   
  }
}

void loop() {


}
