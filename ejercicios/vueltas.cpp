#include <iostream>

using namespace std;
vueltas_1000=residuo/1000; //numero de billetes de 1000
    residuo=residuo-vueltas_1000*1000;
    vueltas_500=residuo/500; //numero de billetes de 500
    residuo=residuo-vueltas_500*500;
    vueltas_100=residuo/100;
    residuo=residuo-vueltas_100*100;

    cout << "numero de billetes de 1000 = " << vueltas_1000 << "\n"
    cout << "numero de billetes de 500 = " << vueltas_500 << "\n"
    cout << "numero de billetes de 100 = " << vueltas_100 << "\n"

int main()
{
    int precio;
    int pago;
    int vueltas_1000=0;
    int vueltas_500=0;
    int vueltas_100=0;
    int residuo;
    
    cout<<"coloque el precio del producto: "<<endl;
    cin>>precio;
    cout<<"cuanto va a pagar por este producto: "<<endl;
    cin>>pago;

    if(precio>pago){
        cout<<"la cantidad ingresada es insuficiente"<<endl;
    }
    else if(precio<pago){
            residuo=pago-precio;
            if(residuo>1000){
                vueltas_1000=residuo/1000;
                residuo=residuo-vueltas_1000*1000;
            }
            if(residuo>=500 && residuo<1000){
                vueltas_500=residuo/500;
                residuo=residuo-vueltas_500*500;
            }
            if(residuo>=100 && residuo<100){
                vueltas_100=residuo/100;
                residuo=residuo-vueltas_100*100;

            }
            cout << "numero de billetes de 1000 = " << vueltas1000 << "\n"
            cout << "numero de billetes de 500 = " << vueltas_500 << "\n"
            cout << "numero de billetes de 100 = " << vueltas_100 << "\n"

    }
    else{
        cout<<"usted pago la cantidad justa"<<endl;
    }
    return 0;
}
