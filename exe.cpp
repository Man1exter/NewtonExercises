#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

void wczytaj_dane()
{
    int a,b,c;
    int *wsk_a;
    wsk_a = &a;
    int *wsk_b;
    wsk_b = &b;
    int *wsk_c;
    wsk_c = &c;

    cout << "Wprowadz dane a: ";
    cin>> a;

    while(a <= 0){

        cout << "liczby nie mogą być mniejsze od 0!" << endl;
        
        return;         
    }

    cout << "Wprowadz dane b: ";
    cin>> b;
    cout << "Wprowadz dane c: ";
    cin>> c;


    cout << "Twoje  dane  to  a:  " << *wsk_a << endl;
    cout << "Twoje  dane  to  b:  " << *wsk_b << endl;
    cout << "Twoje  dane  to  c:  " << *wsk_c << endl;

}

void przetworz_dane()
{ 
int a,b,c;
int *wsk_a;
int *wsk_b;
int *wsk_c;
int delta;
float wynik;
float x1,x2;

delta = (*wsk_b * *wsk_b) * 4 * *wsk_a * *wsk_c;
wynik = sqrt((float)delta);

cout << endl;

x1 = (-*wsk_b) - sqrt((float)delta) / a * a;
x2 = (-*wsk_b) + sqrt((float)delta) / a * a;
}


void wyswietl_dane()
{   
int a,b,c;
int delta;
int *wsk_a;
int *wsk_b;
int *wsk_c;
float wynik;
float x1,x2;

cout << "delta: " << delta << endl;
cout << "wynik z delty po przepierwiastkowaniu: " << wynik << endl;

cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;

}

int main()
{
    
  wczytaj_dane();
  przetworz_dane();
  wyswietl_dane();

    return 0;
}