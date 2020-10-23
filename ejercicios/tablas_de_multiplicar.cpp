#include <iostream>
using namespace std;

int main(){
	int num,contador=0;
	cout<<"deme un numero para saber su tabla: ";
	cin>>num;
	cout<<"la tabla del "<<num<<" es: "<<endl;
	while(contador<=9){
		cout<<num<<"*"<<contador<<"="<<num*contador<<endl;
		contador+=1;

	}
}