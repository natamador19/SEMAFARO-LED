#include <LiquidCrystal.h>

int LEDVERDE=10;
int LEDROJO=8;
int LEDAMARILLO=9;

int estado;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  pinMode(LEDVERDE,INPUT);
  pinMode(LEDAMARILLO,INPUT);
  pinMode(LEDROJO,INPUT);
  lcd.begin(16,2);
	lcd.print("BIENVENIDO");
}

void loop()
{
 estado= analogRead(A3);
  if(estado==0){
    delay(890);
    lcd.clear();
   digitalWrite(LEDROJO,HIGH);
  lcd.print("ALTO");
  delay(1200); 
  lcd.clear();
  digitalWrite(LEDROJO,LOW);
  digitalWrite(LEDAMARILLO,HIGH);
  lcd.print("DESPACIO");  
  delay(799);
  lcd.clear(); 
  digitalWrite(LEDAMARILLO,LOW);
  digitalWrite(LEDVERDE,HIGH);
  lcd.print("SIGA");  
  delay(1200);
  lcd.clear();  
  digitalWrite(LEDVERDE,LOW);
  
  }
   
}