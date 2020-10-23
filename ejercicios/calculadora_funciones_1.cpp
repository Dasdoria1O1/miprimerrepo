#include <iostream>
using namespace std;

int sumar(int a, int b){
    return a + b;
}


int restar(int a, int b){
    return a - b;
}


double division(double a, double b){
    return a / b;
}

int multiplicacion(int a, int b){
    return a * b;
}




int main(){
	int opcion = 10, valor_1, valor_2, rta;
	double rta_division, a, b;
	while(opcion!=0){
		cout<<"\n";
		cout<<"digite '1' para la suma"<<"\n";
		cout<<"digite '2' para la resta"<<"\n";
		cout<<"digite '3' para la multiplicación"<<"\n";
		cout<<"digite '4' para la división"<<"\n";
		cout<<"digite '0' para salir de la calculadora"<<"\n";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Entro a la acción sumar \n";
				cout<<"ingrese el primer valor: ";
				cin >> valor_1;
				cout<<"ingrese el segundo valor: ";
				cin >> valor_2;
				cout<<"el resultado de la suma de los valores: "<<valor_1<<" + "<<valor_2<<" es igual a: "<<sumar(valor_1,valor_2)<<"\n";
				break;
			case 2:
				cout<<"Entro a la acción restar \n";
				cout<<"ingrese el primer valor: ";
				cin >> valor_1;
				cout<<"ingrese el segundo valor: ";
				cin >> valor_2;
				rta = valor_1 - valor_2;
				cout<<"el resultado de la resta de los valores: "<<valor_1<<" - "<<valor_2<<" es igual a: "<<restar(valor_1,valor_2)<<"\n";
				break;
			case 3:
				cout<<"Entro a la acción multiplicar \n";
				cout<<"ingrese el primer valor: ";
				cin >> valor_1;
				cout<<"ingrese el segundo valor: ";
				cin >> valor_2;
				rta = valor_1 * valor_2;
				cout<<"el resultado de la multiplicación de los valores: "<<valor_1<<" X "<<valor_2<<" es igual a: "<<multiplicacion(valor_1,valor_2)<<"\n";
				break;
			case 4:
				cout<<"Entro a la acción dividir \n";
				cout<<"ingrese el numerador: ";
				cin >> a;
				cout<<"ingrese el denominador: ";
				cin >> b;
				while(b == 0){
				    cout<<"no se permiten en el denominador el numero cero, ingrese un numero mayor a cero \n";
				    cin>>b;
				}
				rta_division = a/b;
				cout<<"el resultado de la división de los valores: "<<a<<" / "<<b<<" es igual a: "<<division(a,b)<<"\n";
				break;
			case 0:
				cout<<"Gracias por usar la calculadora \n";
				break;
		    default:
				cout<<"Esta opcion no es valida \n";
				cout<<"Ingrese un número valido \n";
				break;
			
		}
	
	}

}