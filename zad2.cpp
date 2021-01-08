#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(int a,int b,int c, int delta){
cout << "Podaj a :"; 
cin >> a;
cout << "Podaj b :"; 
cin >> b;
cout << "Podaj c :"; 
cin >> c;

if(a == 0){
    cout << " b * b =  " << b*b << endl;
    return;
} else {


cout << endl;

cout << "twoje dane a: " << a << endl;
cout << "twoje dane b: " << b << endl;
cout << "twoje dane c: " << c << endl;

cout << endl;
}

}

void przetworzDane(){

}


void wyswietlWynik(){

}


int main()
{
int a,b,c;
int x1,x2;
int delta;
delta = b*b - 4 * a * c;  

cout << "podaj dane: " << endl;
czytajDane(a , b, c, delta);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.