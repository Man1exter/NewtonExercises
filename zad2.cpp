#include <iostream>
#include <math.h>

using namespace std;



void czytajDane(int a,int b,int c, double delta){
cout << "Podaj a :"; 
cin >> a;
cout << "Podaj b :"; 
cin >> b;
cout << "Podaj c :"; 
cin >> c;

if(a == 0){
    cout << " b * b =  " << b * b << endl;
    return;
} else {


cout << endl;

cout << "twoje dane a: " << a << endl;
cout << "twoje dane b: " << b << endl;
cout << "twoje dane c: " << c << endl;

cout << endl;
}

}

void przetworzDane(int a,int b,int c, double delta, double x1, double x2, double deltaPrzep){

delta = b * b - 4 * a * c;
cout << "delta poczatkowa: " << delta << endl;

deltaPrzep = sqrt(delta);
cout << "delta po przepierwiastkowaniu: " << deltaPrzep << endl;


if(a == 0)
    {
        cout<<"To nie jest rownanie kwadratowe" << endl;
    }
    else
    {
        double delta = b*b-4*a*c;
        double x1, x2;
 
        if( delta > 0 )
        {
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            cout<<"x1 = "<<x1<<"\n";
            cout<<"x2 = "<<x2;
        }
 
        else if(delta==0)
        {
            x1=-b/(2*a);
            cout<<"x0 = "<<x1;
        }
 
        else // delta < 0
        {
            cout<<"Brak rozwiazan";
        }
    }

}


void wyswietlWynik(int a,int b,int c, double delta, double x1, double x2, double deltaPrzep){

cout << "delta po przepierwiastkowaniu: " << delta << endl;
cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;

}


int main()
{
int a,b,c;
double x1,x2;
double delta;
double deltaPrzep;

cout << "podaj dane: " << endl;
czytajDane(a , b, c, delta);
przetworzDane(a , b , c, delta, x1, x2, deltaPrzep);
wyswietlWynik(a , b , c, delta, x1, x2, deltaPrzep);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.