#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* tablas de multiplicar de un numero */
    int num;
    int i= 0;
    while (i <= 12)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;
        int resultado= i * num;
        cout << num << "*" << i << "=" << resultado << endl;
            i++;

    }
    return 0;
}
