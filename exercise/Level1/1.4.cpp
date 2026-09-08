// ejercicio 1.4
#include <iostream>
using namespace std;

int main() 
{
cout << "factorial de un numero a laegir " << endl ;
int n;
cin >> n;
int factorial = 1;
for (int i=1; i <= n; i++)
{
 factorial *= i;
}

cout << "El facotrial de " << n << " es: " << factorial << endl;

cout << "Dame un numero para calcular sus cuadrados previos";
int k;
cin >> k;
int j=1;
while (j <= k)
{
 cout << "el cuadrado de " << j << "es: " << j*j << endl;
  j += 1;
}



return 0;
}