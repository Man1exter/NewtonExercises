#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(){

int a,b,c;
int *wsk_a;
int *wsk_b;
int *wsk_c;
wsk_a = &a;
wsk_b = &b;
wsk_c = &c;

cout << "podaj dane: " << endl;
cout << "podaj a: " << endl;
cin >> a;
cout << "podaj b: " << endl;
cin >> b;
cout << "podaj c: " << endl;
cin >> c;

cout << "Przez wskaznik: " <<*wsk_a << endl;
}


void przetworzDane(){

}

void wyswietlWynik(){


}


int main()
{

double delta;
double deltaPrzep;
double x1,x2;
int liczbaPierwiastkow;

czytajDane();
przetworzDane();
wyswietlWynik();

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.