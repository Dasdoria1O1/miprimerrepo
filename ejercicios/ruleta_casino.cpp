#include <iostream>

using namespace std;

int main()
{
    int plata_actual=600, pos_apuesta, pos_cayo;
    while(plata_actual>100 && plata_actual<=1000){
        cout<<"jugador a que posicion apuesta(0-30): ";
        cin>>pos_apuesta;
        pos_cayo=rand()%30;
        cout<<"la ruleta se detuvo en la posicion: "<<pos_cayo<<endl;
        if(pos_apuesta==pos_cayo){
            cout<<"tenemos un ganador"<<endl;
            plata_actual+=200;
        }else{
            cout<<"lo sentimos su numero no es el correcto, perdio"<<endl;
            plata_actual-=100;
        }
        cout<<"actualmente tiene "<<plata_actual<<" de plata"<<endl;
        
    }
    if(plata_actual<100){
        cout<<"ya no tengo nada que apostar, me retiro"<<endl;
    }else if(plata_actual>=1000){
        cout<<"ya gane suficiente, me retiro"<<endl;
    }
}
