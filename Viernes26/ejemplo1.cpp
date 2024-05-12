/*Leer x cantidad de numeros e imprimir la sum de dichos numeros*/
#include <iostream>

using namespace std;

#define MAX 100

// Variable Global
int nums[MAX];
int pos = 0;

void agregarNum(int num);
int sumar(int suma, int elemAct);

void agregarNum(int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++;
    }
    else
    {
        cout << "No hay espacio para almacenar";
    }

int sumar(int suma, int elemAct)
{
    if(elemAct == -1){
        return suma;
    }

suma += nums[elemAct];
sumar(suma, elemAct -1);
elemAct--;

}
    cout << "No hay espacio para almacenar" << num << endl;
}

void menu()
{
    int op, num;

    cout << "1. ingresar numero. \n";
    cout << "2. Sumar. \n";
    cout << "3. Salir. \n";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Agregar numero.\n";
        cout << "Dime un numero: ";
        cin >> num;
        agregarNum(num);

        break;
    case 2:
        cout << "sumar: " << endl;
        break;
    case 3:
        cout << "Salir" << endl;
        break;
    default:
        cout << "Opcion invalida... ";
        break;
    }
    if(op!=3){
    menu();
    }

}

main()
{
    menu();
}

