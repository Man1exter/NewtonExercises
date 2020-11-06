#include <iostream>
#include <math.h>

using namespace std;



void obliczOdleglosc(){

    int x1,x2,y1,y2,d;

 cout << "podaj wartość x1: " << endl;
cin >> x1;
    cout << "podaj wartość x2: " << endl;
cin >> x2;
    cout << "podaj wartość y1: " << endl;
cin >> y1;
    cout << "podaj wartość y2: " << endl;
cin>> y2;

d = sqrt(pow(x2-x1, 2.0)+ pow(y2-y1,2.0));

cout << "odległość wynosi: " << d << endl;

}


int main()
{

obliczOdleglosc();


    return 0;
}