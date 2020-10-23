#include <iostream>

using namespace std;

int main()
{
    int con=1,tam;
    cout<<"cuantas secuencias quiere: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        con=con*2;
    }
    int lista[con]={0};
    con=1;
    for(int i=0;i<tam;i++){
        for(int j=0;j<con;j++){
            if(lista[j]==0){
                lista[con+j]=1;
            }else{
                lista[con+j]=0;
            }
        }
        con=con*2;
    }
    cout<<"la secuencia es: ";
    for(int i=0;i<tam;i++){
        cout<<lista[i]<<",";
    }
}
