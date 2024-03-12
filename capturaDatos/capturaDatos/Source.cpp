#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout << "Ingrese un numero entero: ";
    cin >> entero;

    cout << "Ingrese un numero flotante: ";
    cin >> flotante;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    cout << "Ingrese una cadena: ";
    cin.ignore();
    getline(cin, cadena);

    cout << "----------------------------------" << endl;
    cout << "El numero de tipo entero entrado fue: " << entero << endl;
    cout << "El numero de tipo float entrado fue: " << flotante << endl;
    cout << "El numero de tipo caracter entrado fue: " << caracter << endl;
    cout << "El numero de tipo cadena entrado fue: " << cadena << endl;

    return 0;
}