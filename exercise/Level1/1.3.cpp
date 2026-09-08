// ejercicio 1.3 
#include <iostream>
using namespace std;

int main()
{
 double spot;
 cout << "ingresa el precio spot: " ;
 cin >> spot;
 double strike;
 cout << "Dame el strike: ";
 cin >> strike;
 double call = spot- strike;
double payoff;
 if (call > 0)
 { payoff = call ;
 }
 else 
 { payoff = 0;
 }
bool inTheMoney = (call > 0);

cout << "El payoff de la call es: " << payoff << endl;
cout << "in the money? " << inTheMoney << endl;

 return 0;
}
