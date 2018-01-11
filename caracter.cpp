#include <iostream>
using namespace std;
int main(void)
{
    char car;
    cout << "Introduzca un caracter: ";
    cin >> car;
    switch (car)
    {
           case 'a':
           case 'A':
           case 'e':
           case 'E':
           case 'i':
           case 'I':
           case 'o':
           case 'O':
           case 'u':
           case 'U': cout << car << " es una vocal" << endl;
                     break;
           default : cout << car << " no es una vocal" << endl;
    }
    system("pause");
}
