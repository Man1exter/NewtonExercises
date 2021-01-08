#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(int a,b,c){

    cout << "Wprowadz dane a: ";
    cin>> &a;

    while(a <= 0){

        cout << "liczby nie mogą być mniejsze od 0!" << endl;
        
        return;         // zabezpieczenie przed wpisaniem liczby mniejszej od zera! 
    }

    cout << "Wprowadz dane b: ";
    cin>> &b;
    cout << "Wprowadz dane c: ";
    cin>> &c;


    cout << "Twoje  dane  to  a:  " << a << endl;
    cout << "Twoje  dane  to  b:  " << b << endl;
    cout << "Twoje  dane  to  c:  " << c << endl;

}

void przetworzDane(int a, int b, int c, int *delta, float *pier, float *x, float *x1, float *x2){

*delta = (b*b)-4*a*c;
*pier = sqrt(*delta);
*x = -b/(2*a);
*x1 = (-b-*pier)/(2*a);
*x2 = (-b+*pier)/(2*a);

}


void wyswietlWynik(){
int delta;

}


int main()
{

int a,b,c,delta;
float pier,x,x1,x2;

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.