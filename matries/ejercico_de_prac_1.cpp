#include <iostream>

using namespace std;

int main()
{
    int matriz[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"deme datos para la matriz: ";
            cin>>matriz[i][j];
        }
    }
    
    cout<<"traspuesta: "<<endl;
    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            cout<<matriz[b][a]<<" ";
        }
        cout<<" "<<endl;
    }
}
