#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

int ind=2;
int con=3;
int ir=4;
int r1= 8;
int r2= 9;
int r3= 10;
int r4= 11;
int r5= 12;
int inductive=0;
int capacitive=0;
int irsensor=0;

void setup() {
    lcd.init();                      // initialize the lcd 
    lcd.backlight();
    Serial.begin(9600);
      pinMode(ind, INPUT_PULLUP);
      pinMode(con, INPUT_PULLUP);
      pinMode(ir, INPUT_PULLUP);
        pinMode(r1, OUTPUT);
        pinMode(r2, OUTPUT);
        pinMode(r3, OUTPUT);
        pinMode(r4, OUTPUT);
        pinMode(r5, OUTPUT);
}

void loop() {
    inductive=digitalRead(ind);
    capacitive=digitalRead(con);
    irsensor=digitalRead(ir);

if (inductive==HIGH && capacitive==LOW && irsensor==LOW){
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait...");
     delay(6000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("This is a ");
     lcd.setCursor(0,1);
     lcd.print("Metal");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Press Bin1");
     lcd.setCursor(0,1);
     lcd.print("to START");
     delay (8000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Processing..");
     delay (8000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Almost done..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Finish!!");
     delay (5000);
     
}
  else if (inductive==LOW && capacitive==HIGH && irsensor==LOW){
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait...");
     delay(6000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("This is a ");
     lcd.setCursor(0,1);
     lcd.print("Metal");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Press Bin1");
     lcd.setCursor(0,1);
     lcd.print("to START");
     delay (3000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Processing..");
     delay (8000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Almost done..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Finish!!");
     delay (2000);
  }
    else if (inductive==LOW && capacitive==LOW && irsensor==LOW){
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait...");
     delay(6000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("This is a ");
     lcd.setCursor(0,1);
     lcd.print("Metal");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Press Bin1");
     lcd.setCursor(0,1);
     lcd.print("to START");
     delay (8000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Processing..");
     delay (8000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Please wait..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Almost done..");
     delay (5000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Finish!!");
     delay (5000);
  }
    else{
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print("Hi! I'm Ready");
        delay(1500);
        lcd.clear();
        lcd.setCursor(5,0);
        lcd.print("PLEASE");
        lcd.setCursor(0,1);
        lcd.print("INSERT THE  MATERIAL");
        delay(5000);
      }
            delay(1000);
}
