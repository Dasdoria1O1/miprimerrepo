#include <iostream>

using namespace std;

/*
Hacer un programa en C++ que lea un número n y haga:

Si el numero es par: muestre todos los números pares que se encuentran entre 1 y n.

Si es impar: muestre en forma descendente los números impares de n a 1.

Si es -1. terminar el programa.

*/

int main()
{
    int n;

    do{
        cout<<"deme un numero cualquiera: "<<endl;
        cin>>n;
        cout << "respuesta :" <<endl;

        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<i<< ", ";
                }

           }
            cout<<" "<<endl;
            
        }else{
            for(int i=n;i>=1;i--){
                if (i%2!=0){
                   cout<<i<< ", ";
                }
                
            }
            
        } 
        
    }while(n != -1);

}