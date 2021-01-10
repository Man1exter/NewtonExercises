#include <iostream>
#include <math.h>

using namespace std;



float czytajDane(){

float liczba;

cout << "Podaj dane: ";
cin >> liczba;

return liczba;


}


float przetworzDane(float a, float b, float c){

float delta;
int liczbaPierwiastkow;
delta = b * b - 4 * a * c;

if(delta > 0){
    liczbaPierwiastkow = 2;
    cout << "2 rozwiazania" << endl;}
if(delta = 0){
    liczbaPierwiastkow = 1;
    cout << "1 rozwiazania" << endl;}
if(delta < 0){
    liczbaPierwiastkow = 0;
    cout << "0 rozwiazania" << endl;}

switch(liczbaPierwiastkow){

    case 0:
    cout << "ok" << endl;
    break;

    case 1:
cout << "ok" << endl;
    break;

    case 2:
cout << "ok" << endl;
    break;
}

return liczbaPierwiastkow;
}


void wyswietlWynik(float a, float b, float c, float delta){
cout << "Twoje dane:" << endl;
cout << "a:  " << a << endl;
cout << "b:  " << b << endl;
cout << "c:  " << c << endl;
cout << "delta: " << delta << endl;
}


int main()
{
float a,b,c;
float delta;
float liczbaPierwiastkow;


a = czytajDane();
b = czytajDane();
c = czytajDane();

liczbaPierwiastkow = przetworzDane(a,b,c);

// przetworzDane(a,b,c);
wyswietlWynik(a,b,c,delta);

    return 0;
}

// Napisz program, który z wykorzystaniem instrukcji wyboru ​switch 
// ​obliczy pierwiastki równaniakwadratowego ​ax​2​+bx+c = 0​, gdzie zmienne ​a, b, c​ to liczby rzeczywiste wprowadzane z klawiatury.
// Program powinien zawierać trzy funkcje:
// a) czytaj_dane() - odpowiedzialną za wczytanie danych do programu i obsłużenie sytuacji kiedy a = 0;
// b) przetworz_dane() - odpowiedzialną za wykonanie niezbędnych obliczeń;
// c) wyswietl_wynik() - odpowiedzialną za pokazanie rezultatów na ekranie komputera.




// if(a == 0)
//     {
//         cout<<"To nie jest rownanie kwadratowe wiec b*b: " << b*b << endl;
//         return deltaWynik;
//     }
//     else
//     {
//         double deltaWynik = b * b - 4 * a * c;
//         double x1, x2;
 
//         if( deltaWynik > 0 )
//         {
//             x1 = (-b - sqrt(deltaWynik)) / (2*a);
//             x2 = (-b + sqrt(deltaWynik)) / (2*a);

//             cout<<"x1 = "<< x1 <<"\n";
//             cout<<"x2 = "<< x2;

//             return deltaWynik;
//         }
 
//         else if(deltaWynik == 0)
//         {
//             x1= -b / (2*a);
//             cout<<"x0 = "<< x1;
//             return deltaWynik;
//         }
 
//         else // delta < 0
//         {
//             cout<<"Brak rozwiazan";
//             return deltaWynik;
//         }
//     }

//     cout<<endl;