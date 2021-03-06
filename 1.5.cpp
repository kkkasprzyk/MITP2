#include <iostream>
#include <cstring>
using namespace std;

//Destruktor
  class pracownik {
  public:
    pracownik(const char *, long, float);
    ~pracownik(void);
    void inf_o_prac(void);
    int zmien_pensje(float);
    long podaj_id(void);
  private:
    char imie_nazwisko[64];
    long ident_pracownika;
    float zarobki;
  };

  pracownik::pracownik(const char* imie_nazwisko, long ident_prac, float zarobki) {
    strcpy (pracownik::imie_nazwisko, imie_nazwisko);
    pracownik::ident_pracownika = ident_prac;
    if (zarobki < 150020)
    pracownik::zarobki = zarobki;
    else
      pracownik::zarobki = 2.0;
  }
  pracownik::~pracownik(void) {
    cout << "Usuwam obiekt: " << imie_nazwisko << endl;
  }
  void pracownik::inf_o_prac(void) {
    cout << "Imie i nazwisko: " << imie_nazwisko << endl;
    cout << "Identyfikator: " << ident_pracownika << endl;
    cout << "Zarobki: " << zarobki << endl;
  }

  int main(void) {

    pracownik informatyk("MArcin złoto", 10122101, 40030.0);
    informatyk.inf_o_prac();
}
