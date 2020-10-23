#include <iostream>

using namespace std;

int main()
{
    int personas,ingresos,egresos=240000,punto_equi,personas_total=0;
    while(punto_equi!=0){
        egresos=240000;
        cout<<"cuantas personas van a participar: ";
        cin>>personas;
        personas_total+=personas;
        ingresos=15000*personas_total;
        if(personas_total<=18){
            if(personas_total<10 && personas_total>4){
                cout<<"se pide 1 pizza"<<endl;
                egresos+=25000;
            }else if(personas_total<15){
                cout<<"se pide 2 pizzas"<<endl;
                egresos+=50000;
            }else if(personas_total<=18){
                cout<<"se pide 3 pizzas"<<endl;
                egresos+=75000;
            }
        }else{
            egresos+=(personas_total*10000);
            if(personas_total>30){
                egresos+=((personas_total*10000)*0.1);
            }
        }
        punto_equi=ingresos-egresos;
        cout<<"punto_equi: "<<punto_equi<<endl;

        
    }
    cout<<"se necesito "<<personas_total<<" personas para conseguir el punto de equilibrio"<<endl;
}
