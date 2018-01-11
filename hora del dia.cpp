#include <iostream>
using namespace std;
int main(void)
{
   int hora;
   cout << "\nIntroduzca una hora (entre 0 y 24): ";
   cin >> hora;
   if ((hora >= 0) and (hora < 12))
        cout << "\nBuenos dias\n";
   else if ((hora >= 12) and (hora < 18))
             cout << "\nBuenas tardes\n";
        else if ((hora >= 18) and (hora < 24))
                  cout << "\nBuenas noches\n";
             else
                  cout << "\nHora no válida\n";
   system("pause");
}
