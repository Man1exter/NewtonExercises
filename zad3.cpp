#include <cstdlib>
#include <iostream>


using namespace std;

long long silnia(int n)                 // long long ---- 92235678234 do 92234567234 ------
{
 if( n < 2 )
        return 1;                          //silnia z 0 i 1 wynosi 1

return n * silnia(n-1);                
}


int main()
{

 int n;
 
 cout << "Podaj liczbę: "<< endl;
 cin >> n;
 cout << "n! = " << silnia(n) << endl;


 return 0;
 
}

// silnia podstawia za n liczby od 1 do n

// 0!=1,
// n!=n*(n-1)!, gdzie n >= 1