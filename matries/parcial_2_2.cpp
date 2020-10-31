#include <iostream>

using namespace std;



int main()
{
    
}

int cantidad_total(int despachos[],int can_clientes,int pedidos[],int can_pedidos){
    int mayor=0;
    for(int i=0;i<can_clientes;i + 3){
        
        for(int j=0;j<can_pedidos;i + 2){
            if(pedidos[j]==despachos[i]){
                despachos[i + 2]+=pedidos[j + 1];
            }
        }
    }
    for(int l=0;l<can_clientes;l + 3){
       if(despachos[l + 1]==1 && despachos[l + 2]>=1000){
            despachos[l + 2]+=10;
        } 
    }
    for(int t=0;t<can_clientes;t + 3){
        if(despachos[t + 2]>mayor){
            mayor=despachos[t + 2];
        }
    }
    return mayor;
}
