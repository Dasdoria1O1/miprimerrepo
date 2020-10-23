#include<iostream>
using namespace std;
int main(){
	int num,div_1,div_2,lista[8], conteo=0, suma_total=0;
	cout<<"deme un numero: "<<endl;
	cin>>num;

	while(num>0){
		lista[conteo]=num%10;
		num=num/10;
		conteo+=1;
	}

	for(int j=conteo-1; j>=0; j--){
		suma_total+=lista[j];
	}
	cout<<"la suma de los digitos dio "<<suma_total<<endl;
	if(suma_total>=10 && suma_total<=99){
		div_1=suma_total/10;
		div_2=suma_total%10;

		if(div_1+div_2==9){
			cout<<"el numero que usted coloco si es divisible por 9"<<endl;
		}else{
			cout<<"el numero que usted coloco no es divisible por 9"<<endl;
		}
	}else if(suma_total<10){
		if(suma_total==9){
			cout<<"el numero que usted coloco si es divisible por 9"<<endl;
		}else{
			cout<<"el numero que usted coloco no es divisible por 9"<<endl;
		}
	}
}


