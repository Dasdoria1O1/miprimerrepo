/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    
    int matriz[2][3][3];
    int suma[3][3];
    int fila,columna,m;

    for (int m =0; i < 2; ++m){
        for (int fila = 0; fila < 3; ++fila){
            for (int columna = 0; columna < 3; ++columna){
                cout<<"para la matriz "<< m+1 << "ingrese ["<<file<<"]["<<columna<<"]"<<endl;
                cin>>matriz[m][fila][columna];
            }
        }
    }

    
    return 0;
}
