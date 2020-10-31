#include <iostream>

using namespace std;

int main()
{
    int matriz_1[2][2],matriz_2[2][2],resultado[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"deme datos para la matriz 1: ";
            cin>>matriz_1[i][j];
            cout<<"deme datos para la matriz 2: ";
            cin>>matriz_2[i][j];
        }
    }
    
    for(int p=0;p<2;p++){
        for(int k=0;k<2;k++){
            for(int s=0;s<2;s++){
                resultado[p][k]+=matriz_1[p][s]*matriz_2[s][k];
            }   
        }
    }
    
    cout<<"producto: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<resultado[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}
