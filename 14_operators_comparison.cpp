#include <iostream>
using namespace std;


// A list of all comparison operators:


/*
Operator	Name	                   Example
  ==	     Equal to	                x == y	
  !=	     Not equal	                x != y	
  >	         Greater than	            x > y	
  <	         Less than	                x < y	
  >=	     Greater than or equal to	x >= y	
  <=	     Less than or equal to	    x <= y	

*/

int main(){
	int x, y;
	int sum;
	
	cout << "Deme el primer número: " <<endl;
	cin >> x;
	cout << "Deme el segundo número: " <<endl;
	cin >> y;
	sum = x + y;
	cout << "El resultado de la suma es: " << sum;
}
