#include <iostream>

using namespace std;



int main()
{
    int tam,valores,frecuencia,index;
    cout<<"digame el tamaño del histograma: ";
    cin>>tam;
    int age[tam],frec[tam];
    
    for(int i=0;i<tam;i++){
        cout<<"digame las edades para el histograma: ";
        cin>>valores;
        age[i]=valores;
        cout<<"digame la frecuencia de cada edad: ";
        cin>>frecuencia;
        frec[i]=frecuencia;
        
    }
    
    int pivote=true,mayor;
    for(int i=0;i<tam;i++){
         if(pivote){
             mayor = frec[i];
             pivote = false;
         }else{
             if(frec[i]>mayor){
                 mayor =frec[i];
             }
         }
    }
    
    for(int i=0;i<tam;i++){
     if (frec[i] == mayor){
         index =i;
     }
    }
    cout<<"el maximo local en el histograma es la edad: "<<age[index]<<" con una frecuencia de: "<<frec[index]<<endl;
    

   