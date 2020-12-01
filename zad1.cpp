#include <iostream>
#include <cmath>
using namespace std;







void oblicz_odleglosc()
{int x, x2, y, y2;
cin>>x>>x2>>y>>y2;
float d;
 d=sqrt(pow(x2-x, 2)+pow(y2-y, 2));

  cout<<"Bezparametrowo: "<<d<<".";
}

float oblicz_odleglosc(int x3,int x4, int y3, int y4)
{ float d;
  d=sqrt(pow(x4-x3, 2)+pow(y4-y3, 2));

    return d;
}

void oblicz_odleglosc(int, int, int, int, float*);

void oblicz_odleglosc(int, int, int, int, float&);

float oblicz_odleglosc1(int, int, int, int, float);




int main()
{int x,x2,y,y2;
 float d;

 cout<<"Podaj kolejno 4 liczby: ";
    cin>>x>>x2>>y>>y2;


  oblicz_odleglosc();

  float odleglosc = oblicz_odleglosc(x,x2,y,y2);
  cout<<endl<<"Przez wartosc wynik wynosi: "<<odleglosc;

  oblicz_odleglosc(x, x2, y, y2, &d);
    cout<<endl<<"Przez wskaznik wynik wynosi: "<<d;

    oblicz_odleglosc(x, x2, y, y2, d);
    cout<<endl<<"Przez referencje wynik wynosi: "<<d;

   float wynik=oblicz_odleglosc1(x, x2, y, y2, d);
    cout<<endl<<"Przez return wynik wynosi: "<<wynik;

  return 0;
}



void oblicz_odleglosc(int x3, int x4, int y3, int y4, float *d)
{
*d=sqrt(pow(x4-x3, 2)+pow(y4-y3, 2));
}

void oblicz_odleglosc(int x3, int x4, int y3, int y4, float &delta)
{
 delta=sqrt(pow(x4-x3, 2)+pow(y4-y3, 2));
}

float oblicz_odleglosc1(int x3, int x4, int y3, int y4, float delta)
{
 return delta=sqrt(pow(x4-x3, 2)+pow(y4-y3, 2));
}