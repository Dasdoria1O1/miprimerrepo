#include <iostream>
using namespace std;

/*
----Syntax---

if(condition){
	block of code to be executed if the condition is true
} else {
	block of code to be executed if the condition is false
}

*/

int main(){
	int num = 20;
	if (num < 34){
		cout << "El numero " << num << " es menor que 24";	
	} else {
		cout << "El numero " << num << " es mayor que 24";	
	}
}
