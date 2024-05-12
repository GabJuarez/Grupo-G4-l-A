#include <iostream>

using namespace std;

#define MAX 5

void agregar(int num);
void mostrar();

int numeros[MAX];
int fila;

int main(int argc, char const *argv[])
{
    int cant; 
    int num;
    cout << "Dime cuantos # deseas ingresar: ";
    cin >> cant;
    for(int i =0; i <cant; i++)
    {
        cout << "Dime un #: ";
        cin >> num;
        agregar(num);
    }

    return 0;
}

void agregar (int num){
    if (fila >= MAX){
        cout << "NO SE PUEDE AGREGAR MAS NUMEROS" << endl;
    }else{
        numeros[fila] = num;
        fila++;
    }
}

void mostrar(){
    if(fila == 0){
        cout << "no hay elementos" << endl;

    }
    else{
        for(int i = 0; i <fila; i++){
            cout << numeros[i] << endl;
        }
    }
}