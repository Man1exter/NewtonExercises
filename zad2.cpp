#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(int a,int b,int c, int *wsk_a, int *wsk_b, int *wsk_c){
cout << "Podaj a :"; 
cin >> a;
wsk_a = &a;

cout << "Podaj b :"; 
cin >> b;
wsk_b = &b;


cout << "Podaj c :"; 
cin >> c;
wsk_c = &c;

cout << endl;

if(*wsk_a == 0){
    cout << " Równanie liniowe " << b * b << endl;
    return;
} else {

cout << "twoje dane a: " << a << endl;
cout << "twoje dane b: " << b << endl;
cout << "twoje dane c: " << c << endl;

cout << endl;
}
}


void przetworzDane(int a,int b,int c, double delta, double x1, double x2, double deltaPrzep, int liczbaPierwiastkow, int *wsk_a, int *wsk_b, int *wsk_c){

delta = wsk_b * wsk_b - 4 * wsk_a * wsk_c;
cout << "delta poczatkowa: " << delta << endl;

deltaPrzep = sqrt(delta);
cout << "delta po przepierwiastkowaniu: " << deltaPrzep << endl;

if(deltaPrzep > 0) liczbaPierwiastkow = 2;
if(deltaPrzep = 0) liczbaPierwiastkow = 1;
if(deltaPrzep < 0) liczbaPierwiastkow = 0;


switch (liczbaPierwiastkow) {

    case 0:
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);

            cout<<"x1 = "<< x1 <<"\n";
            cout<<"x2 = "<< x2;
    break;

    case 1:
            x1=-b/(2*a);

            cout<<"x0 = "<< x1;
    break;

    case 2:
       cout << "Brak rozwiazan" << endl;
    break;
}

}


void wyswietlWynik(int a,int b,int c, double delta, double x1, double x2, double deltaPrzep, int *wsk_a, int *wsk_b, int *wsk_c){

cout << endl;
cout << "delta po przepierwiastkowaniu: " << delta << endl;
cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;

}


int main()
{
int a,b,c;

int *wsk_a;
wsk_a = &a;
int *wsk_b;
wsk_a = &b;
int *wsk_c;
wsk_a = &c;

double x1,x2;
double delta;
double deltaPrzep;
int liczbaPierwiastkow;

cout << "podaj dane: " << endl;
czytajDane(a , b, c, wsk_a, wsk_b, wsk_c);
przetworzDane(a , b , c, delta, x1, x2, deltaPrzep, liczbaPierwiastkow, wsk_a, wsk_b, wsk_c);
wyswietlWynik(a , b , c, delta, x1, x2, deltaPrzep, wsk_a, wsk_b, wsk_c);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.