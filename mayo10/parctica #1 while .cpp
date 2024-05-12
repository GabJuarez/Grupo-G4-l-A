#include <iostream>

using namespace std;

 int main(int argc, char const *argv[])
 {
    int  num = 0, suma = 0;
    while (num >= 0)
    {
        suma += num;
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    cout << "La suma es: " << suma << endl;

    return 0;
 }
 