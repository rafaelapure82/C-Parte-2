#include<iostream>
using namespace std;
int main()

{

   float num1, num2, res;

   int op;

   cout<<"Ingrese primer numero : ";

   cin>>num1;

   cout<<"Ingrese segundo numero : ";

   cin>>num2;

   cout<<"Operacion que desea realizar"<<endl;

   cout<<"[1] Suma "<<endl;

   cout<<"[2] Resta "<<endl;

   cout<<"[3] Multiplicacion "<<endl;

   cout<<"[4] Division "<<endl;

   cout<<"Ingrese opcion (1-4) : ";

   cin>>op;

   switch(op)

   {

       case 1 : res=num1+num2;

                    cout<<"La suma es : "<<res<<endl;

                    break;

       case 2 : res = num1-num2;

                    cout<<"La resta es : "<<res<<endl;

                    break;

       case 3 : res = num1*num2;

                    cout<<"La multiplicacion es : "<<res<<endl;

                    break;

       case 4 :

                    if(num2!=0)

                     {

                         res = num1/num2;

                         cout<<"La division es : "<<res<<endl;

                     }

                    else

                         cout<<"No se puede dividir entre cero ";

                    break;

       default :

                     cout<<"numero de Opcion fuera de rango "<<endl;

   }
system("pause");
}
