#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// -5 4 2

void czytaj_dane(int &a, int &b, int &c){

cout << "Podaj dane:" << endl;
cout << "podaj a: ";
cin >> a;
cout << "podaj b: ";
cin >> b;
cout << "podaj c: ";
cin >> c;

if(a == 0){
    cout << " Rownanie liniowe! " << b * b << endl;
    return;
} else {

cout << endl;
cout << "Twoje dane a: " << a << " b: " << b << " c: " << c << endl;
cout << endl;
}

}

void przetworz_dane(int a,int b, int c, float &delta,float &deltaPo,int &x1,int &x2, int &liczbaPierwiastkow){

    delta = b * b - 4 * a * c;
    cout << "Delta przed pierwiastkowaniem: " << delta << endl;

    deltaPo = sqrt(delta);
    cout << "Delta po pierwiastkowaniem: " << deltaPo << endl;

    if(deltaPo > 0){
      liczbaPierwiastkow = 2;
      cout << "Liczba pierwiastkow: " << liczbaPierwiastkow << endl;
    }
     else if(deltaPo = 0){
      liczbaPierwiastkow = 1;
      cout << "Liczba pierwiastkow: " << liczbaPierwiastkow << endl;
    }
    else {
      liczbaPierwiastkow = 0;
      cout << "Liczba pierwiastkow: " << liczbaPierwiastkow << endl;
    }

    switch(liczbaPierwiastkow){

        case 2:
         x1 = -b - sqrt(delta) / a * a;
         x2 = -b + sqrt(delta) / a * a;
         cout << "x1: " << x1 << endl;
         cout << "x2: " << x2 << endl;
        break;

        case 1:
         x1 = -b / (2*a);
         cout << "x1: " << x1 << endl;
        break;

        case 0:
         cout << "Brak miejsc zerowych funckji kwadratowej!" << endl;
        break;
    }


}

void wyswietl_wynik(int a,int b, int c, float delta,float deltaPo,int x1,int x2, int liczbaPierwiastkow){
    cout << endl;
    cout << "delta przed pierwiastkowaniem: " << delta << endl;
    cout << "delta po pierwiastkowaniem: " << deltaPo << endl;
    cout << "liczba pierwiastkow: " << liczbaPierwiastkow << endl;
    if(liczbaPierwiastkow = 2){
     cout << "x1: " << x1 << endl;
     cout << "x2: " << x2 << endl;
    } else if (liczbaPierwiastkow = 1){
    cout << "x1: " << x1 << endl;
    }else{
        cout << "Brak liczby pierwiastow" << endl;
    }
}


int main()
{
int a,b,c;
int x1,x2;
int liczbaPierwiastkow;
float delta;
float deltaPo;


czytaj_dane(a,b,c);
przetworz_dane(a,b,c,delta,deltaPo,x1,x2,liczbaPierwiastkow);
wyswietl_wynik(a,b,c,delta,deltaPo,x1,x2,liczbaPierwiastkow);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równania kwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.

