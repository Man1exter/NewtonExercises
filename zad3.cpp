#include <iostream>
#include <math.h>

using namespace std;




void podajDoIlu(){
int n;

cout << "Podaj numer silni do obliczenia: " << endl;
cin >> n;
}




void obliczenia(){
int n;

if(n >= 1 ){

n = n * (n-1);

} else {

    cout << "Wartość musi być większa lub równa 1" << endl;
    return;
}
cout << "wynik to: " << n << endl;
}





void ostateczny(){
    int n;

    cout << "ostateczny wynik to: " << n << endl;
}


int main()
{

podajDoIlu();
obliczenia();
ostateczny();



    return 0;
}

// silnia podstawia za n liczby od 1 do n

// 0!=1,
// n!=n*(n-1)!, gdzie n >= 1