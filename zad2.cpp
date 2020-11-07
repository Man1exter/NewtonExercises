#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(){

    int a,b,c;

    cout << "Wprowadz dane a: ";
    cin>> a;

    while(a <= 0){

        cout << "liczby nie mogą być mniejsze od 0!" << endl;
        
        return;         // zabezpieczenie przed wpisaniem liczby mniejszej od zera! 
    }

    cout << "Wprowadz dane b: ";
    cin>> b;
    cout << "Wprowadz dane c: ";
    cin>> c;


    cout << "Twoje  dane  to  a:  " << a << endl;
    cout << "Twoje  dane  to  b:  " << b << endl;
    cout << "Twoje  dane  to  c:  " << c << endl;

}

void przetworzDane(){
int a,b,c;
int w; // wynik

w =  b*b -4 * a * c;

cout << "wynik z delty to: " << w << endl;
}


void wyswietlWynik(){
int w;


cout << "  OSTATECZNY  wynik  to:  "<< w << endl; // dodatkowa funcja obliczajaca jeszcze pierwiastek
}


int main()
{

czytajDane();
przetworzDane();
wyswietlWynik();


    return 0;
}