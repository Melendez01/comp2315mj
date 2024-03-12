#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout <<"Ingrese un número entero: ";
    cin >> entero;

    cout <<"Ingrese un número entero: ";
    cin >> flotante;

    cout <<"Ingrese un número entero: ";
    cin >> caracter;

    cout <<"Ingrese un número entero: ";
    getline(cin,cadena);

    cout <<"----------------------------------"<<endl;
    cout <<"El número de tipo entero entrado fue: "<<entero<<endl;
    cout <<"El número de tipo float entrado fue: "<<flotante<<endl;
    cout <<"El número de tipo caracter entrado fue: "<<caracter<<endl;
    cout <<"El número de tipo cadena entrado fue: "<<cadena<<endl;

    return 0;
}