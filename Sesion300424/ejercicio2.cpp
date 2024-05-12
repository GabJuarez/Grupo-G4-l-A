#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Numeros impares entre " << num1 << " y " << num2 << " son:\n";

    // Ite
    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
