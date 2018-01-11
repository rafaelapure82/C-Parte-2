#include <iostream>
using namespace std;
int main(void)
{
    int A,B, Resultado;
    char operador;
    cout << "Introduzca un numero:";
    cin >> A;
    cout << "Introduzca otro numero:";
    cin >> B;
    cout <<"Introduzca un operador (+,-,*,/):";
    cin >> operador;
    Resultado = 0;
    switch (operador)
    {
           case '-' : Resultado = A - B;
                      break;
           case '+' : Resultado = A + B;
                      break;
           case '*' : Resultado = A * B;
                      break;
           case '/' : Resultado = A / B; //suponemos B!=0
                      break;
           default : cout << "Operador no valido"<< endl;
    }
    cout << "El resultado es: ";
    cout << Resultado << endl;
    system("pause");
}
