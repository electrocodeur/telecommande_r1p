#include <IRremote.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
IRsend ir_send;
int btn_mns = A3;
int btn_pls = A2;
int btn_Ok = A1;
int btnon = 13;
int btnsrc = A0;
int btnchpls = 6;
int btnchmns = 5;
int btnvopls = 2;
int btnvomns = 4;
int btnhaut = 11;
int btnbas = 9;
int btndroite = 12;
int btngauche = 8;
int btnok = 10;
int menuobjet = 0;
int menusam = 0;
int menuled = 0;
int menucine = 0;
void setup() {
  lcd.begin();
  lcd.backlight();
  pinMode(btn_pls, INPUT);
  pinMode(btn_mns, INPUT);
  pinMode(btn_Ok, INPUT);
  pinMode(btnon, INPUT);
  pinMode(btnsrc, INPUT);
  pinMode(btnchpls, INPUT);
  pinMode(btnchmns, INPUT);
  pinMode(btnhaut, INPUT);
  pinMode(btnbas, INPUT);
  pinMode(btndroite, INPUT);
  pinMode(btngauche, INPUT);
  pinMode(btnok, INPUT);
}

void loop() {
  if (digitalRead(btn_pls) == 1)
  {
    menuobjet++;
  }
  if (digitalRead(btn_mns) == 1)
  {
    menuobjet--;
  }
  if (menuobjet == 0) {
    lcd.clear();
    lcd.print("Choix de l'objet");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 3;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 1;
      delay(100);
    }
  }
  if (menuobjet == 1) {
    lcd.clear();
    lcd.print("  Tele SAMSUNG");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xE0E040BF, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xE0E0807F, 32);
      delay(100);
    }
    if (digitalRead(btnchpls) == 1) {
      ir_send.sendNEC(0xE0E048B7, 32);
      delay(100);
    }
    if (digitalRead(btnchmns) == 1) {
      ir_send.sendNEC(0xE0E008F7, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xE0E0E01F, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xE0E0D02F, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xE0E006F9, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xE0E08679, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xE0E046B9, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xE0E0A659, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xE0E016E9, 32);
      delay(100);
    }
    if (digitalRead(btn_Ok) == 1) {
      menusam = 1;
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 0;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 2;
      delay(100);
    }
  }
  if (menuobjet == 2) {
    lcd.clear();
    lcd.print("    Flash led");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xFFB04F, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xFFF807, 32);
      delay(100);
    }
    if (digitalRead(btnchpls) == 1) {
      ir_send.sendNEC(0xFFB24D, 32);
      delay(100);
    }
    if (digitalRead(btnchmns) == 1) {
      ir_send.sendNEC(0xFF00FF, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xFF58A7, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xFF30CF, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xFF906F, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xFFB847, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xFF8877, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xFF9867, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xFFD827, 32);
      delay(100);
    }
    if (digitalRead(btn_Ok) == 1) {
      menuled = 1;
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 1;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 3;
      delay(100);
    }
  }
  if (menuobjet == 3) {
    lcd.clear();
    lcd.print("   Home-cinema");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xC2CA807F, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xC2CA8877, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xC2CACC33, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xC2CADC23, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xC2CAB04F, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xC2CAA857, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xC2CAB847, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xC2CAA45B, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xC2CAA05F, 32);
      delay(100);
    }
    if (digitalRead(btn_Ok) == 1) {
      menucine = 1;
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 2;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 0;
      delay(100);
    }
  }
  ///////////////////////////////////////////
  if (menuled != 0) {
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xFFB04F, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xFFF807, 32);
      delay(100);
    }
    if (digitalRead(btnchpls) == 1) {
      ir_send.sendNEC(0xFFB24D, 32);
      delay(100);
    }
    if (digitalRead(btnchmns) == 1) {
      ir_send.sendNEC(0xFF00FF, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xFF58A7, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xFF30CF, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xFF906F, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xFFB847, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xFF8877, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xFF9867, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xFFD827, 32);
      delay(100);
    }
    if (digitalRead(btn_Ok) == 1) {
      menuled = 1;
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 1;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 3;
      delay(100);
    }
  }
  if (menuled == 1) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Blanc");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFFA857, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 14;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 2;
      delay(100);
    }
  }
  if (menuled == 2) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Rouge");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFFE817, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 1;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 3;
      delay(100);
    }
  }
  if (menuled == 3) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Vert");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF48B7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 2;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 4;
      delay(100);
    }
  }
  if (menuled == 4) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Bleu");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF6897, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 3;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 5;
      delay(100);
    }
  }

  if (menuled == 5) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("   Rouge clair");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF02FD, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 4;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 6;
      delay(100);
    }
  }
  if (menuled == 6) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("   Vert clair");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF32CD, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 5;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 7;
      delay(100);
    }
  }
  if (menuled == 7) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Violet");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF20DF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 6;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 8;
      delay(100);
    }
  }
  if (menuled == 8) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("  Orange clair");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF50AF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 7;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 9;
      delay(100);
    }
  }

  if (menuled == 9) {
    menuobjet = 5;
    lcd.clear();
    lcd.print(" Bleu turquoise");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF7887, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 8;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 10;
      delay(100);
    }
  }
  if (menuled == 10) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("   Rose fonce");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF708F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 9;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 11;
      delay(100);
    }
  }
  if (menuled == 11) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Jaune");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF38C7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 10;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 12;
      delay(100);
    }
  }
  if (menuled == 12) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Bleu");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF28D7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 11;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 13;
      delay(100);
    }
  }
  if (menuled == 13) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Rose");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xFF00F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 12;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 14;
      delay(100);
    }
  }
  if (menuled == 14) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Retour");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      menuled = 0;
      menuobjet = 0;
    }
    if (digitalRead(btn_mns) == 1) {
      menuled = 13;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuled = 1;
      delay(100);
    }
  }
  if (menusam != 0) {
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xE0E040BF, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xE0E0807F, 32);
      delay(100);
    }
    if (digitalRead(btnchpls) == 1) {
      ir_send.sendNEC(0xE0E048B7, 32);
      delay(100);
    }
    if (digitalRead(btnchmns) == 1) {
      ir_send.sendNEC(0xE0E008F7, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xE0E0E01F, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xE0E0D02F, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xE0E006F9, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xE0E08679, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xE0E046B9, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xE0E0A659, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xE0E016E9, 32);
      delay(100);
    }
    if (digitalRead(btn_Ok) == 1) {
      menusam = 1;
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menuobjet = 0;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menuobjet = 2;
      delay(100);
    }
  }
  if (menusam == 1) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        0");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E08877, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 19;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 2;
      delay(100);
    }
  }
  if (menusam == 2) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        1");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E020DF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 1;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 3;
      delay(100);
    }
  }
  if (menusam == 3) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        2");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0A05F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 2;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 4;
      delay(100);
    }
  }
  if (menusam == 4) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        3");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0609F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 3;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 5;
      delay(100);
    }
  }
  if (menusam == 5) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        4");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E010EF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 4;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 6;
      delay(100);
    }
  }
  if (menusam == 6) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        5");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0906F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 5;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 7;
      delay(100);
    }
  }
  if (menusam == 7) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        6");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E050AF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 6;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 8;
      delay(100);
    }
  }
  if (menusam == 8) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        7");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E030CF, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 7;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 9;
      delay(100);
    }
  }
  if (menusam == 9) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        8");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0B04F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 8;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 10;
      delay(100);
    }
  }
  if (menusam == 10) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        9");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0708F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 9;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 11;
      delay(100);
    }
  }
  if (menusam == 11) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("  Retour chaine");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0C837, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 10;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 12;
      delay(100);
    }
  }
  if (menusam == 12) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Muet");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0F00F, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 11;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 13;
      delay(100);
    }
  }
  if (menusam == 13) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("  Chaine liste");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0D629, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 12;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 14;
      delay(100);
    }
  }
  if (menusam == 14) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Menu");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E058A7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 13;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 15;
      delay(100);
    }
  }
  if (menusam == 15) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Guide");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0F20D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 14;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 16;
      delay(100);
    }
  }
  if (menusam == 16) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Outils");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0D22D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 15;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 17;
      delay(100);
    }
  }
  if (menusam == 17) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Info");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0F807, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 16;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 18;
      delay(100);
    }
  }
    if (menusam == 18) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Exit");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xE0E0B44B, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 17;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 19;
      delay(100);
    }
  }
  if (menusam == 19) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Retour");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      menusam = 0;
      menuobjet = 0;
    }
    if (digitalRead(btn_mns) == 1) {
      menusam = 18;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menusam = 1;
      delay(100);
    }
  }
  if (menucine != 0) {
    if (digitalRead(btnon) == 1) {
      ir_send.sendNEC(0xC2CA807F, 32);
      delay(100);
    }
    if (digitalRead(btnsrc) == 1) {
      ir_send.sendNEC(0xC2CA8877, 32);
      delay(100);
    }
    if (digitalRead(btnvopls) == 1) {
      ir_send.sendNEC(0xC2CACC33, 32);
      delay(100);
    }
    if (digitalRead(btnvomns) == 1) {
      ir_send.sendNEC(0xC2CADC23, 32);
      delay(100);
    }
    if (digitalRead(btnhaut) == 1) {
      ir_send.sendNEC(0xC2CAB04F, 32);
      delay(100);
    }
    if (digitalRead(btnbas) == 1) {
      ir_send.sendNEC(0xC2CAA857, 32);
      delay(100);
    }
    if (digitalRead(btndroite) == 1) {
      ir_send.sendNEC(0xC2CAB847, 32);
      delay(100);
    }
    if (digitalRead(btngauche) == 1) {
      ir_send.sendNEC(0xC2CAA45B, 32);
      delay(100);
    }
    if (digitalRead(btnok) == 1) {
      ir_send.sendNEC(0xC2CAA05F, 32);
      delay(100);
    }
  }
  if (menucine == 1) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        0");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAF40B, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 22;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 2;
      delay(100);
    }
  }
  if (menucine == 2) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        1");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA827D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 1;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 3;
      delay(100);
    }
  }
  if (menucine == 3) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        2");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA42BD, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 2;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 4;
      delay(100);
    }
  }
  if (menucine == 4) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        3");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA9C63, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 3;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 5;
      delay(100);
    }
  }
  if (menucine == 5) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        4");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA22DD, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 4;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 6;
      delay(100);
    }
  }
  if (menucine == 6) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        5");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAA25D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 5;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 7;
      delay(100);
    }
  }
  if (menucine == 7) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        6");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA629D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 6;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 8;
      delay(100);
    }
  }
  if (menucine == 8) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        7");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAE21D, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 7;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 9;
      delay(100);
    }
  }
  if (menucine == 9) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        8");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAFC03, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 8;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 10;
      delay(100);
    }
  }
  if (menucine == 10) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("        9");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAEC13, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 9;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 11;
      delay(100);
    }
  }
  if (menucine == 11) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("  Retour rapide");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAD827, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 10;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 12;
      delay(100);
    }
  }
  if (menucine == 12) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("  Avance rapide");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAC837, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 11;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 13;
      delay(100);
    }
  }
  if (menucine == 13) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("   Retour lent");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA2ED1, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 12;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 14;
      delay(100);
    }
  }
  if (menucine == 14) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("   Avance lent");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CAAE51, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 13;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 15;
      delay(100);
    }
  }
  if (menucine == 15) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Muet");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA9C63, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 14;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 16;
      delay(100);
    }
  }
  if (menucine == 16) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Home");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA6C93, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 15;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 17;
      delay(100);
    }
  }
  if (menucine == 17) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Outils");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA28D7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 16;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 18;
      delay(100);
    }
  }
  if (menucine == 18) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Exit");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA7E81, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 17;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 19;
      delay(100);
    }
  }
  if (menucine == 19) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Return");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA38C7, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 18;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 20;
      delay(100);
    }
  }
  if (menucine == 20) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Info");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA649B, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 19;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 21;
      delay(100);
    }
  }
  if (menucine == 21) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("      Eject");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      ir_send.sendNEC(0xC2CA649B, 32);
      delay(100);
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 20;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 22;
      delay(100);
    }
  }
  if (menucine == 22) {
    menuobjet = 5;
    lcd.clear();
    lcd.print("     Retour");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    if (digitalRead(btn_Ok) == 1) {
      menucine = 0;
      menuobjet = 0;
    }
    if (digitalRead(btn_mns) == 1) {
      menucine = 21;
      delay(100);
    }
    if (digitalRead(btn_pls) == 1) {
      menucine = 1;
      delay(100);
    }
  }
}
