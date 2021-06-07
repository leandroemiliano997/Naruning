#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C poyo(0x27,16,2);
byte we[8]={
 B00100,
 B00011,
 B00000,
 B00111,
 B10010,
 B01100,
 B01000,
 B10000
};
byte we2[8]={
 B00000,
 B11100,
 B11100,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000
};
byte we3[8]={
  B00100,
  B00011,
  B00000,
  B00111,
  B00010,
  B10101,
  B01000,
  B00000
};
byte we4[8]={
  B00000,
  B11110,
  B01110,
  B10000,
  B00000,
  B10000,
  B01000,
  B00100
};
byte we5[8]={
  B00001,
  B00000,
  B00000,
  B00011,
  B00000,
  B00001,
  B00010,
  B00100
};
byte we6[8]={
  B00000,
  B11111,
  B00111,
  B01000,
  B10000,
  B11100,
  B00100,
  B00100
};
byte we7[8]={
  B00100,
  B00011,
  B00000,
  B00111,
  B00011,
  B00101,
  B01111,
  B10000
};
byte we8[8]={
  B00000,
  B11100,
  B11100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte we9[8]={
 B00100,
 B00011,
 B00000,
 B00111,
 B10010,
 B01100,
 B01000,
 B10000
};
byte we10[8]={
 B00000,
 B11100,
 B11100,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000
};
byte we11[8]={
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000
};
byte we12[8]={
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000
};
byte we13[8]={
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000
};
byte we14[8]={
  B00011,
  B00111,
  B00110,
  B01110,
  B01110,
  B01100,
  B01100,
  B01100
};
byte we15[8]={
  B11000,
  B11100,
  B11110,
  B01110,
  B01111,
  B00111,
  B00111,
  B00111
};

void setup() {
  poyo.init();
  poyo.backlight();
  poyo.createChar(1,we);
  poyo.createChar(2,we2);
  poyo.createChar(3,we3);
  poyo.createChar(4,we4);
  poyo.createChar(5,we5);
  poyo.createChar(6,we6);
  poyo.createChar(7,we7);
  poyo.createChar(8,we8);
  
}
void loop(){

  poyo.setCursor(0,0);
  poyo.write(1);
  
  
  poyo.setCursor(1,0);
  poyo.write(2);
    
  delay(500);
  
  poyo.clear();
  delay(200);
  
  poyo.setCursor(1,0);
  poyo.write(3);
  
  
  poyo.setCursor(2,0);
  poyo.write(4);
  delay(500);

  poyo.clear();
  delay(200);

  poyo.setCursor(2,0);
  poyo.write(5);
  
  
  poyo.setCursor(3,0);
  poyo.write(6);
  delay(500);
  
  poyo.clear();
  delay(200);

  poyo.setCursor(3,0);
  poyo.write(7);

  poyo.setCursor(4,0);
  poyo.write(8);
  
   poyo.setCursor(4,0);
  poyo.write(8);
  
   poyo.setCursor(4,0);
  poyo.write(8);
  
  delay(500);

  poyo.clear();
  delay(200);

    poyo.setCursor(4,0);
  poyo.write(1);
  
  
  poyo.setCursor(5,0);
  poyo.write(2);
    
  delay(500);
  
  poyo.clear();
  delay(200);
  
  poyo.setCursor(5,0);
  poyo.write(3);
  
  
  poyo.setCursor(6,0);
  poyo.write(4);
  delay(500);

  poyo.clear();
  delay(200);

  poyo.setCursor(6,0);
  poyo.write(5);
  
  
  poyo.setCursor(7,0);
  poyo.write(6);
  delay(500);
  
  poyo.clear();
  delay(200);

  poyo.setCursor(7,0);
  poyo.write(7);

  poyo.setCursor(8,0);
  poyo.write(8);
  delay(500);

  poyo.clear();
  delay(200);

    poyo.setCursor(8,0);
  poyo.write(1);
  
  
  poyo.setCursor(9,0);
  poyo.write(2);
    
  delay(500);
  
  poyo.clear();
  delay(200);
  
  poyo.setCursor(9,0);
  poyo.write(3);
  
  
  poyo.setCursor(10,0);
  poyo.write(4);
  delay(500);

  poyo.clear();
  delay(200);

  poyo.setCursor(10,0);
  poyo.write(5);
  
  
  poyo.setCursor(11,0);
  poyo.write(6);
  delay(500);
  
  poyo.clear();
  delay(200);

  poyo.setCursor(11,0);
  poyo.write(7);

  poyo.setCursor(12,0);
  poyo.write(8);
  delay(500);

  poyo.clear();
  delay(200);
  

}
