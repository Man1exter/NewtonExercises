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
int wynik;

wynik = b*b-4*a*c;

}


int main()
{

czytajDane();
przetworzDane();


    return 0;
}