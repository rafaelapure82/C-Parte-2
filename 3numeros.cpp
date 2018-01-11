#include <iostream> 
#include <locale.h>
using namespace std;
int main()
{
	system("color 50");
setlocale(LC_CTYPE,"spanish");	
int A=0, B=0, C=0;
cout<<"Ingrese 3 números"<<endl;
cin>>A>>B>>C; //Lectura de valores por teclado
if ( A > B )
   { if (A > C )
         cout<<"A es el número mayor";
     else
         cout<<"C es el número mayor";
   }
else
   { if ( B > C )
         cout<<"B es el número mayor";
     else
         cout<<"C es el número mayor";
   }
   system("pause");
   
}
