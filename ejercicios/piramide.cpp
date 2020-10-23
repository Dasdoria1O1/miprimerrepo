#include <iostream>
using namespace std;

int main(){
	int conteo=1, conteo_2=1;
	while(conteo<=9){
	    
		conteo_2=1;
		while(conteo_2<=conteo){
			cout<<conteo*conteo_2<<" ";
			conteo_2+=1;

		} 
		cout<<" "<<endl;
		conteo+=1;
	}
}

