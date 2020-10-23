#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int impar=1, num, doble_impar, repeticion;
    cout<<"deme un numero: ";
    cin>>num;
    for(int j=0;j<num;j++){
        repeticion= pow(2, j);
        doble_impar = impar*impar;
        impar+=2;
        for(int i=0;i<repeticion;i++){
        cout<<doble_impar<<" ";
        
        
        }
    }
    
   // printf ("7 ^ 3 = %f\n", pow (7.0, 3.0) );
}