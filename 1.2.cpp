#include <iostream>
#include <cstring>
using namespace std;

  class koty {
  public:
    char rasa[199];
    int srednia_waga;
    int srednia_wysokosc;      //deklaracja pol i metody
    char pochodzenie[199];
    void info(void);
  };

  void koty::info(void) {  //definicja metody klasy na zewnatrz
    cout << "Rasa: " << rasa << endl;
    cout << "Srednia waga: " << srednia_waga << endl;
    cout << "Srednia wysokosc: " << srednia_wysokosc << endl;
    cout << "Pochodzenie: " << pochodzenie << endl;
  }

 int main(void) {
  koty alex , sara;  //deklaracja obiektow klasy

  strcpy (alex.rasa, "dachowiec");
  strcpy (alex.pochodzenie, "Rosja");               //przypisanie danych do obiektow klasy
  alex.srednia_waga = 33;
  alex.srednia_wysokosc = 64;

  strcpy (sara.rasa, "dachowiec");
  strcpy (sara.pochodzenie, "Polska");//przypisanie danych do obiektow klasy
  sara.srednia_waga = 4;
  sara.srednia_wysokosc = 44;

  alex.info();      //wywolanie funkcji wypisujacej dane
  sara.info();
}
