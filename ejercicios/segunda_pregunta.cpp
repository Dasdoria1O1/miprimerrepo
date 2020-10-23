#include <iostream>

using namespace std;

int main(){
	int poblacion_a, poblacion_b, meses_total=0;
	double tasa_a, tasa_b, tasa_a_final, tasa_b_final;
	cout<<"recuerde para que el experimento funcione A debe tener poblacion menor a B y B una tasa menor de la de A"<<endl;
	cout<<"deme la poblacion inicial de A: ";
	cin>>poblacion_a;
	cout<<"deme la tasa de crecimiento de A: ";
	cin>>tasa_a;
	cout<<"deme la poblacion inicial de B: ";
	cin>>poblacion_b;
	cout<<"deme la tasa de crecimiento de B: ";
	cin>>tasa_b;
	while(poblacion_a>=poblacion_b || tasa_b>=tasa_a){
		cout<<"sus entradas no se permiten, vuelva a escribir"<<endl;
		cout<<"deme la poblacion inicial de A: ";
		cin>>poblacion_a;
		cout<<"deme la tasa de crecimiento de A: ";
		cin>>tasa_a;
		cout<<"deme la poblacion inicial de B: ";
		cin>>poblacion_b;
		cout<<"deme la tasa de crecimiento de B: ";
		cin>>tasa_b;
		
	}
	cout<<"se aceptaron sus entradas, prosigamos con los calculos"<<endl;
	while(poblacion_a<=poblacion_b){
		if(poblacion_a>=20000){
			tasa_a_final=tasa_a/2;
			poblacion_a=poblacion_a*tasa_a_final;
		}else if(poblacion_b>=20000){
			tasa_b_final=tasa_b/2;
			poblacion_b=poblacion_b*tasa_b_final;
		}
		poblacion_a=poblacion_a*tasa_a;
		poblacion_b=poblacion_b*tasa_b;
		meses_total+=1;
	}
	cout<<"despues de "<<meses_total<<" meses, la poblacion A de hormigas supero la cantidad de hormigas de la poblacion B"<<endl;
	cout<<"la poblacion A quedo con un total de: "<<poblacion_a<<" hormigas"<<endl;
	cout<<"la poblacion B quedo con un total de: "<<poblacion_b<<" hormigas"<<endl;
}