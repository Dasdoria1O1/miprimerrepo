#include <iostream>
using namespace std;

int main(){
   int p_jugador_1=0, p_jugador_2=0, victoria, conteo_jugadas=0;
   while(p_jugador_1<=21 || p_jugador_2<=21){
       cout<<"en este turno quien gano(1 o 2): "<<endl;
       cin>>victoria;
       if(victoria==1){
           p_jugador_1+=1;
           
       }else if (victoria==2){
           p_jugador_2+=1;
           
       }else{
           cout<<"este jugador no existe"<<endl;
           
       }
       
       if((p_jugador_1==7 && p_jugador_2==0)||(p_jugador_2==7 && p_jugador_1==0)){
           if(p_jugador_1==7){
             cout<<"el jugador 1 es el ganador por muerte subita" <<endl; 
           }else{
             cout<<"el jugador 2 es el ganador por muerte subita" <<endl; 
           }
           break;
       }
   }
   
   
    
    do{
        
        
        if(p_jugador_1==21){
           cout<<"el jugador 1 es el ganador"<<endl;
        else if(p_jugador_2==21){
           cout<<"el jugador 2 es el ganador"<<endl; 
        }
    
        
    }while();
    
    
    
    
   }
}

