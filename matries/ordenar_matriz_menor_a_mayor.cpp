#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3]={{2,5,1},{10,9,3},{0,8,7}};
    int temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int l=0;l<3;l++){
                for(int t=0;t<3;t++){
                    if(matriz[i][j]<matriz[l][t]){
                        temp=matriz[i][j];
                        cout<<"temp: "<<temp<<endl;
                        matriz[i][j]=matriz[l][t];
                        cout<<"matriz i j: "<<matriz[i][j]<<endl;
                        matriz[l][t]=temp;
                        cout<<"matriz l t: "<<matriz[l][t]<<endl;
                    }
                }
            }
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<",";
        }
        cout<<endl;
    }
}
