#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*leer si un numero y decir si es primo*/
    int numero;
    cout << "Dime un numero: ";
        cin >> numero;
    while (numero >= 0)
    {
    
        if (numero % numero == 0 || numero % 1 == 0)
        {
            cout << "el numero ingresado es primo"<< endl;
        }
        else
        {
            cout << "no es primo";
        }
    }
    return 0;
}
