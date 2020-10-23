#include <iostream>

using namespace std;

int main()
{
   int x, x_mayor=0, x_menor=370, y, y_mayor=0, y_menor=370, z, z_mayor=0, z_menor=370, tam, cont=0;
   int cont_x=0, cont_y=0, cont_z=0;
   
   cout<<"cuantos desplazamientos se van hacer para cada posicion: ";
   cin>>tam;
   while(cont<tam){
       cout<<"di la cordenada de x: ";
       cin>>x;
       cont_x+=x;
       if(x>x_mayor){
           x_mayor=x;
       }if(x<x_menor){
           x_menor=x;
       }
       cout<<"di la cordenada de y: ";
       cin>>y;
       cont_y+=y;
       if(y>y_mayor){
           y_mayor=y;
       }if(y<y_menor){
           y_menor=y;
       }
       cout<<"di la cordenada de z: ";
       cin>>z;
       cont_z+=z;
       if(z>z_mayor){
           z_mayor=z;
       }if(z<z_menor){
           z_menor=z;
       }
       cont+=1;
   }
   
   cout<<"el centroide es: ("<<cont_x/tam<<","<<cont_y/tam<<","<<cont_z/tam<<")"<<endl;
   cout<<"Rango en eje x: "<<x_menor<<" - "<<x_mayor<<endl;
   cout<<"Rango en eje y: "<<y_menor<<" - "<<y_mayor<<endl;
   cout<<"Rango en eje z: "<<z_menor<<" - "<<z_mayor<<endl;

}
