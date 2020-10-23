/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    
    //int matriz[fila]columna3]
    int matriz1[3][3];
    int matriz2[3][3];
    int suma[3][3];
    
    
    
    for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++){
             cout<<"deme los valores de la matriz 1 en la posicion ["<<i<<"]["<<j<<"]"<<endl;
             cin>>matriz1[i][j];
         }
    }
    cout<<"-------------------"<<endl;
    
     for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++){
             cout<<"deme los valores de la matriz 2 en la posicion ["<<i<<"]["<<j<<"]"<<endl;
            cin>>matriz2[i][j];
         }
    }
    
    for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++)
             cout<<matriz1[i][j]<<" ";
             cout<<endl;
    }
    cout<<"-------------------"<<endl;
     for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++)
             cout<<matriz2[i][j]<<" ";
             cout<<endl;
    }
    
    
    for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++)
         suma[i][j] =  matriz1[i][j]+ matriz2[i][j];
             
    }
    cout<<"----resultado----"<<endl;
    
    for (int i=0;i< 3;i++) {
         for (int j=0;j< 3;j++)
             cout<<suma[i][j]<<" ";
             cout<<endl;
    }
    
    
    return 0;
}
