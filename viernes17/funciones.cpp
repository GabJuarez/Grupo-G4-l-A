#include <iostream>
using namespace std;
#include "variables.h"

int menu();
void start();
void addGrade();
void showGrades();
int notaAlta();
int notaBaja();

int menu()
{
    int option;
    system("cls||clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion" << endl;
    cin >> option;
    return option;
}

void start()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresar notas" << endl;
            addGrade();
            system("pause");
            break;
        case 2:
            showGrades();
            break;
        case 3:
            notaAlta();
            break;
        case 4:
            notaBaja();
            break;
        case 6:
            cout << "Salir" << endl;
            system("pause");
        case 5:
            void average();
            system("pause");
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}

void showGrades()
{
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
    system("pause");
}

int notaAlta()
{
    int highest = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }
    cout << "La nota mas alta es: " << highest << endl;
    system("pause");
}

int notaBaja()
{
    int menor = grades[0];
    for (int i = 1; i < position; i++)
    {
        if (grades[i] < menor)
        {
            menor = grades[i];
        }
    }
    cout << "La nota mas baja es: " << menor << endl;
    system("pause");
}

void average()
{
    int sum = 0;
    for (int i = 0; i < position; i++)
    {
        sum += grades[i];
    }
    cout << "El promedio es: " << sum / position << endl;
    system("pause");
}