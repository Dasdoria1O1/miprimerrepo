#include <iostream>

using namespace std;

int main()
{
    int prestamo,  pago_men, mes=0;
    double tasa_anual, interes_men;
    cout<<"de cuanto es su prestamo: ";
    cin>>prestamo;
    cout<<"de cuanto va ser su tasa de interes anual : ";
    cin>>tasa_anual;
    cout<<"de cuanto es su pago mensual: ";
    cin>>pago_men;
    interes_men=tasa_anual/12;
    while(prestamo>0){
        cout<<"le falta por pagar del pretamo: "<<prestamo<<" pesos"<<endl;
        prestamo=prestamo-(pago_men-(prestamo*(interes_men/100)));
        mes+=1;
    }
    cout<<"usted pago su prestamo en un intervalo de: "<<mes<<" meses";
}