#include <iostream>
using namespace std;

/*
Syntax

if (condition1){
	block of code to be executed if condition is tru 
}else if (condition 2){
	block of code to be executed if condition1 is false and condition 2 is true 

}else{
	block of code to be executtd if the condition 1 is false and conditionition2 is false
}

*/


int main(){
	int numero1;
	int numero2;
	

	cout<<"escriba el primer numero a comparar"<<endl;
	cin>>numero1;
	cout<<"escriba el segundo numero a comparar"<<endl;
	cin>>numero2;

	if (numero1>numero2){
		cout<<"el primer numero es mayor al segundo"<<endl;
	}else if (numero1<numero2){
		cout<<"el segundo numero es mayor al primero"<<endl;
	}else{
		cout<<"ambos numeros son iguales"<<endl;
	}
}
