#include<iostream>
#include<conio.h>
using namespace std;
int main()

{

   long num;

   cout<<"Ingrese numero entero: ";

   cin>>num;

   switch(num % 10)

   {

       case 2 : case 5 : case 8 :

            cout<<"El cuadrado del numero es : "<<num*num<<endl;

            break;

       case 4 : case 7 : case 9 :

            cout<<"El numero multiplicado por 5 es : "<<num*5<<endl;

            break;

       default :

             cout<<"El numero ingresado es : "<<num<<endl;
            
   }
 system("pause");
}
