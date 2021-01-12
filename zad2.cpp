#include <iostream>
#include <math.h>

using namespace std;


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

void przetworz_dane(int a,int b, int c, float delta){
    delta = b * b - 4 * a * c;
    cout << delta << endl;
}


int main()
{
int a,b,c;
float delta;
czytaj_dane(a,b,c);
przetworz_dane(a,b,c,delta);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równania kwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.

