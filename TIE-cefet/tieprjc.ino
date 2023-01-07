#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 9, 8);

//Declaração de variáveis
int numinteirov;
int numinteiroa;
int numdecimalv;
int numdecimala;
int TMP;
float VTMP;
const byte interruptPB1 = 3;
const byte interruptPB2 = 2;
volatile byte state = LOW;
int bot = 1; 
#define temperatura A0

//Variáveis para monitor serial
int dadov = 0;
int memv = 0;
int dadoa = 0;
int dadotemp = 0;
int dadonormal = 0;
int dadooff = 0;

//Inicialização LCD
void setup() {
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("TCC grupo 1-TIE");
  pinMode(interruptPB1, INPUT_PULLUP);
  pinMode(interruptPB2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPB2), ISRPB2, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptPB1), ISRPB1, RISING);
}

void loop() {
 if (bot == 1){
    conversao ();
    mostrar_LCD ();
    Ledbuz ();
    monitor ();
  } else {
    desligado ();
	lcd_serial ();
   }
  }


void conversao () {
  
  int vA3 = analogRead (A3);
  vA3 = map(vA3, 0, 1023, 0, 500);
  
  numinteirov = vA3 / 100;
  numdecimalv = vA3 % 100;

  int aA3 = analogRead(A2);
  aA3 = map(aA3, 205, 420, 100, 205);

  numinteiroa = aA3 / 100;
  numdecimala = aA3 % 100; 

  VTMP = analogRead (temperatura)*5.0 / 1023;
  TMP = round ((VTMP - 0.5)*100);  
}

void mostrar_LCD () {
  
  if (numinteiroa > 1 && numinteirov > 4 && TMP < 5 || numinteiroa > 1 && numinteirov > 4 && TMP > 80){
  lcd.setCursor (0,1);
  lcd.print ("ERRO NO CIRCUITO");
    } else if (numinteiroa > 1 && numinteirov > 4){
  lcd.setCursor (0,1);
  lcd.print ("ERRO CORR E TENS");
    } else if (numinteiroa > 1 && TMP < 5){
  lcd.setCursor (0,1);
  lcd.print ("ERRO CORR E TEMP");
    } else if (numinteiroa > 1 && TMP > 80){
  lcd.setCursor (0,1);
  lcd.print ("ERRO CORR E TEMP");
    } else if (numinteirov > 4 && TMP < 5){
  lcd.setCursor (0,1);
  lcd.print ("ERRO TENS E TEMP");
    } else if (numinteirov > 4 && TMP > 80){
  lcd.setCursor (0,1);
  lcd.print ("ERRO TENS E TEMP");
    } else if (numinteiroa > 1){
  lcd.setCursor (0,1);
  lcd.print ("ERRO NA CORRENTE");
    } else if (numinteirov > 4){
  lcd.setCursor (0,1);
  lcd.print ("ERRO NA TENSAO   ");
   } else if (TMP < 5 || TMP > 80){
  lcd.setCursor (0,1);
  lcd.print ("ERRO TEMPERATURA");
    } else {
  lcd.setCursor (0,1);
  lcd.print(numinteirov);
  lcd.setCursor (1,1);
  lcd.print(".");

  lcd.setCursor (2,1);
  lcd.print(numdecimalv);
  lcd.setCursor (4,1);
  lcd.print ("V ");

  lcd.setCursor(6, 1);
  lcd.print(numinteiroa);
  lcd.setCursor (7,1);
  lcd.print("."); 

  if (numdecimala < 10){
    lcd.setCursor(8,1);
    lcd.print("0");
    lcd.setCursor(9,1);
    lcd.print(numdecimala);
  } else {
  lcd.setCursor (8,1);
  lcd.print(numdecimala);
  }

  lcd.setCursor (10,1);
  lcd.print ("A ");

  if (TMP > 9){
    lcd.setCursor (12,1);
    lcd.print (TMP);
    lcd.setCursor (14,1);
    lcd.print ("C ");
  } else {
    lcd.setCursor (12,1);
    lcd.print ("0");
    lcd.setCursor (13,1);
    lcd.print (TMP);
    lcd.setCursor (14,1);
    lcd.print ("C ");
  }
 }
}

void Ledbuz (){
  
  if (numinteiroa > 1 || numinteirov > 4 || TMP < 5 || TMP > 80){
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    tone (10, 9000, 10000);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    noTone (10);
  }
}

void ISRPB1(){
  if (digitalRead(interruptPB1) == HIGH){
  bot = 1;
 }
}

void ISRPB2(){
  if (digitalRead(interruptPB2) == HIGH){
  bot = 0;
 }  
}

void desligado (){
	digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    noTone (10);
}

void monitor (){
  
  if (numinteiroa > 1 && numinteirov > 4 && TMP < 5 || numinteiroa > 1 && numinteirov > 4 && TMP > 80){
    if (dadov == 0 && dadoa == 0 && dadotemp == 0 || dadov == 0 && dadoa == 0 && dadotemp == 1 || dadov == 0 && dadoa == 1 && dadotemp == 0 || dadov == 0 && dadoa == 1 && dadotemp == 1 || dadov == 1 && dadoa == 0 && dadotemp == 0 || dadov == 1 && dadoa == 0 && dadotemp == 1 || dadov == 1 && dadoa == 1 && dadotemp == 0){
      Serial.println("Erro nos sensores do circuito");
      dadov = 1;
      dadoa = 1;
      dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
    }
      
  } else if (numinteiroa > 1 && numinteirov > 4){
    if (dadoa == 0 && dadov == 0 || dadoa == 1 && dadov == 0 || dadoa == 0 && dadov == 1){
      Serial.println("Erro na tensao e corrente");
      dadoa = 1;
      dadov = 1;
      dadotemp = 0;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if (dadotemp == 1){
          dadov = 0;
          dadotemp = 0;
        } else {
       }
    }  
      
  } else if (numinteiroa > 1 && TMP < 5){
    if (dadoa == 0 && dadotemp == 0 || dadoa == 1 && dadotemp == 0 || dadoa == 0 && dadotemp == 1){
      Serial.println("Erro na corrente e temperatura");
      dadov = 0;
      dadoa = 1;
      dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if (dadov == 1){
          dadoa = 0;
          dadov = 0;
        } else {
        }  
    }
 
  } else if (numinteiroa > 1 && TMP > 80){
     if (dadoa == 0 && dadotemp == 0 || dadoa == 1 && dadotemp == 0 || dadoa == 0 && dadotemp == 1){
      Serial.println("Erro na corrente e temperatura");
      dadoa = 1;
      dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if (dadov == 1){
          dadoa = 0;
          dadov = 0;
        } else {
        }  
    }
  
  } else if (numinteirov > 4 && TMP < 5){
     if (dadov == 0 && dadotemp == 0 || dadov == 1 && dadotemp == 0 || dadov == 0 && dadotemp == 1){
      Serial.println("Erro na tensao e temperatura");
 	  dadov = 1;
      dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if (dadoa == 1){
          dadov = 0;
          dadoa = 0;
        } else {
        }
    }
  
  } else if (numinteirov > 4 && TMP > 80){
    if (dadov == 0 && dadotemp == 0 || dadov == 1 && dadotemp == 0 || dadov == 0 && dadotemp == 1){
      Serial.println("Erro na tensao e temperatura");
 	  dadov = 1;
      dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if (dadoa == 1){
          dadov = 0;
          dadoa = 0;
        } else {
        }
    }
    
  } else if (numinteiroa > 1){
    if (dadoa == 0){
      Serial.println("Erro na corrente");
      dadov = 0;
  	  dadoa = 1;
      dadotemp = 0;
      dadonormal = 0;
      dadooff = 0;
    } else {
        if(dadov == 1 && dadotemp == 0 || dadov == 0 && dadotemp == 1 || dadov == 1 && dadotemp == 1){
          dadoa = 0;
        } else {  
        
        }  
    }
    
  } else if (numinteirov > 4){
    if (dadov == 0){
      Serial.println("Erro na tensao");
      dadov = 1;
      dadoa = 0;
      dadotemp = 0;
      dadonormal = 0;
      dadooff = 0;
    } else {   
        if (dadoa == 1 && dadotemp == 0 || dadoa == 0 && dadotemp == 1 || dadoa == 1 && dadotemp == 1){
 		  dadov = 0;
        } else {
        }  
    }
    
    } else if (TMP < 5 || TMP > 80){
    if (dadotemp == 0){
      Serial.println("Erro na temperatura");
      dadov = 0;
      dadoa = 0;
  	  dadotemp = 1;
      dadonormal = 0;
      dadooff = 0;
    } else {
      	if (dadoa == 1 && dadov == 0 || dadoa == 0 && dadov == 1 || dadoa == 1 && dadov == 1){
          dadotemp = 0;
        } else {
        }
    }
    
  } else {
    if (dadonormal == 0){
      Serial.println("Circuito operando normalmente");
      dadov = 0;
      dadoa = 0;
      dadotemp = 0;
      dadonormal = 1;
      dadooff = 0;
    } else {
      
    }  
 }  
}

void lcd_serial (){
    lcd.setCursor (0,1);
    lcd.print ("CIRC DESATIVADO!");
    dadov = 0;
    dadoa = 0;
    dadotemp = 0;
    dadonormal = 0; 
  	if (dadooff == 0){
      Serial.println("Circuito desativado");
      dadooff = 1;
    } else {
    }  
}
