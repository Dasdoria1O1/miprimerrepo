#include <iostream>

using namespace std;

 struct Fecha{
        int dia,mes,anio;
    };
    
    struct Persona{
        char nombre[20];
        int edad, peso;
        Fecha fecha;
    }persona = {"camilo",23,45,3,12,1986};
    
int main(){
   
   
    
    cout<<"Persona: "<< persona.nombre<<endl;
    cout<<"dia de nacimiento: "<< persona.fecha.dia<<endl;
     return 0;
}
