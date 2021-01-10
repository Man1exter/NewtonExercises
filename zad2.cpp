#include <iostream>
#include <math.h>

using namespace std;



float czytajDane(){

float liczba;

cout << "Podaj dane a,b,c: ";
cin >> liczba;


return liczba;

}


float przetworzDane(float a, float b, float c){

float deltaWynik;


deltaWynik = (b * b) - 4 * a * c;

cout << endl;

return deltaWynik;

}

void wyswietlWynik(float a, float b, float c, float delta){
cout << "Twoje dane:" << endl;
cout << "a:  " << a << endl;
cout << "b:  " << b << endl;
cout << "c:  " << c << endl;
cout << endl;
cout << "delta: " << delta << endl;
}


int main()
{
float a,b,c;
float delta;


a = czytajDane();
b = czytajDane();
c = czytajDane();

delta = przetworzDane(a,b,c);

wyswietlWynik(a,b,c,delta);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.