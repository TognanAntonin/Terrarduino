//Ce programme initialise la date et l'heure puis lit en continu la date et l'heure et l'affiche sur le moniteur série
#include <DS1302.h>

// Init DS1302
DS1302 rtc(2, 3, 4);

// Init structure Time-data
Time t;

void setup()
{
  // Positionnement horloge a run-mode et desactive protection en ecriture
  rtc.halt(false);
  rtc.writeProtect(false);
  
  // Init connection serie
  Serial.begin(9600);

  // Initialisation de l'horloge
  // A mettre a jour avec les bones valeurs pour initialiser l horloge RTC DS1302
  rtc.setDOW(FRIDAY);        // Jour a FRIDAY
  rtc.setTime(19, 10, 0);    // Heure a 19:10:00 (format sur 24 heure)
  rtc.setDate(3, 6, 2016);   // Date  au 3 juin 2016
}

void loop()
{
  // recup donnees DS1302
  t = rtc.getTime();
  
  // Ecriture date sur console serie
  Serial.print("Jour : ");
  Serial.print(t.date, DEC);
  Serial.print(" - Mois : ");
  Serial.print(rtc.getMonthStr());
  Serial.print(" - Annee : ");
  Serial.print(t.year, DEC);
  Serial.println(" -");
  
  // Ecriture heure sur console serie
  Serial.print("C est le ");
  Serial.print(t.dow, DEC);
  Serial.print(" ieme jour de la semaine (avec lundi le premier), et il est ");
  Serial.print(t.hour, DEC);
  Serial.print(" heures, ");
  Serial.print(t.min, DEC);
  Serial.print(" minutes ");
  Serial.print(t.sec, DEC);
  Serial.println(" secondes.");

  // Affichage d un separateur
  Serial.println("------------------------------------------");
  
  // Attente d une seconde avant lecture suivante :)
  delay (1000);
}


