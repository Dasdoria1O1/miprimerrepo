#include <iostream>
using namespace std;

int main(){
    double conteo_del_peso=0,maleta_pesada,maleta_liviana,peso;
    int num_de_maletas=0,conteo_de_precio=0;
    bool bandera_liviana = true, bandera_pesada=true ;

    do{
        cout<<"cuanto pesa su maleta: "<<endl;
        cin>>peso;

        if(peso<=500 && peso>=0){
            conteo_del_peso+=peso;
            num_de_maletas+=1;
            if(peso>=0 && peso<=25){
                conteo_de_precio+=0;

            }else if(peso>=26 && peso<=300){
                conteo_de_precio+=1500;

            }else{
                conteo_de_precio+=2500;
            }
            if(bandera_pesada){
                    bandera_pesada=false;
                    maleta_pesada=peso;
                }else{
                    if(peso>maleta_pesada){
                        maleta_pesada=peso;
                    }
                }
            if(bandera_liviana){
                    bandera_liviana = false;
                    maleta_liviana = peso;
                }else{
                    if(peso < maleta_liviana){
                        maleta_liviana = peso;
                    }
                }
        }else{
            cout<<"este peso de maleta no es permitido"<<endl;
        }
    }while(peso!=-1 && conteo_del_peso <= 18000);
    cout<<"el precio del peso de todas las maletas en el avion es de: "<<conteo_de_precio<<"PESOS \n";
    cout<<"el numero total de maleta es de: "<<num_de_maletas<<endl;
    cout<<"el promedio de peso de las maletas es de: "<<conteo_del_peso/num_de_maletas<<endl;
    cout<<"la maleta mas pesada tiene un peso de:"<<maleta_pesada<<"kg y "<<"la maleta mas liviana tiene un peso de: "<<maleta_liviana<<"kg \n";

}
