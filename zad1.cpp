#include <iostream>

using namespace std;


void obliczOdleglosc(){

d*d = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);

}



int main()
{

int x1,x2,y1,y2;
int d; // wynik

cout << "podaj parametr x1" << endl;
cin >> x1;
cout << "podaj parametr x2" << endl;
cin >> x2;
cout << "podaj parametr y1" << endl;
cin >> y1;
cout << "podaj parametr x2" << endl;
cin >> y2;

cout << obliczOdleglosc(x1,x2,y1,y2) << endl;






    return 0;
}