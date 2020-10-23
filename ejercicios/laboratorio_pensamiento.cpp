#include <iostream>

using namespace std;

int main()
{
   int productos, pro_mayor=0; 
   float producto,sum_productos=0;
   string nombre,nombre_mayor;
   
   cout<<"cuatos productos quiere comprar: "<<endl;
   cin>>productos;
   for(int i=0; i<productos; i++){
       cout<<"deme el valor del producto: "<<endl;
       cin>>producto;
       cout << "deme el nombre del producto: "<<endl;
       cin>>nombre;
       sum_productos=sum_productos+producto;
       if (producto>pro_mayor){
           pro_mayor=producto;
           nombre_mayor=nombre;
       }
   }
   cout<<"el costo total del mercado es de: "<<sum_productos<<endl;
   cout<<"el producto con el mayor valor se llama "<<nombre_mayor<<" y cuesta: "<<pro_mayor<<endl;
   cout<<"el promedio de los productos es: "<<sum_productos/productos<<endl;
}