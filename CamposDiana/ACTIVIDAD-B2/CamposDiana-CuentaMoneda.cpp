#include<iostream>
using namespace std;
int main ()                                     {
        int n,c=0,c1=0,c2=0;

        float x,a=0,a1=0,a2=0;                          cout<< "Cantidad de monedas a ingresar:";
        cin>>n;

        do{                                                     cout<< "ingrese el valor de la moneda (0.10.0.25):";
                cin>>x;                                         c=c+1;
                a=a+x;

        if (x==0.10){
                c1=c1+1;
                a1=a1+x;
        }
        else{
                c2=c2+1;
                a2=a2+x;
        }
        }
        while (c<n);
        cout<< "El resultado fue:"<<endl;
        cout<< "Cantidad de monedas ingresadas:"<<c<<endl;
        cout<< "Cantidad total en dinero contado:"<<a<<endl;
        cout<< "Cantidad de monedas de 0.10c ingresadas:"<<c1<<endl;
        cout<< "Cantidad total en dinero de modenas de 0.10cc:"<<a1<<endl;
        cout<< "Cantidad de monedas de 0.25cc ingresadas:"<<c2<<endl;
       cout<< "Cantidad total en dinero de monedas de 0.25cc:"<<a2<<endl;   

       return 0;
                                                }


