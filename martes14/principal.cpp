#include <iostream>
#include "funciones.cpp"

using namespace std;
int a = 5;
int b = 5;

int main()
{
    showMessage();
    cout << "La suma de los numeros es igual a: " << sumaNumeros(a, b) << endl;

    return 0;
}
