#include <iostream>
using namespace std;
int main(void)
{
    int nota;
    cout << "Introduzca una calificacion numerica entre 0 y 10:";
    cin >> nota;
    cout << "La calificacion del alumno es" << endl;
    if (nota == 10)
    {
       cout << "Matricula de Honor" << endl;
    }
    else if (nota >= 9)
         {
            cout << "Sobresaliente" << endl;
         }
         else if (nota >= 7)
              {
                  cout << "Notable" << endl;
              }
              else if (nota >= 5)
                   {
                       cout << "Aprobado" << endl;
                   }
                   else
                   {
                       cout << "Reprobado" << endl;
                   }
    system("pause");
}
