#include <iostream>
using namespace std;

struct Carro{
		string modelo;
		string color;
		float ancho;
		float largo;
	};

int main(){
	
	int tam;
	cout<<"cuantos carros hay: ";
	cin>>tam;
	Carro tipos[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"que modelo es el carro: ";
		cin>>tipos[i].modelo;
		cout<<"de que color es el carro: ";
		cin>>tipos[i].color;
		cout<<"que tan ancho es el carro: ";
		cin>>tipos[i].ancho;
		cout<<"que tan largo es el carro: ";
		cin>>tipos[i].largo;
	}

	for(int i=0;i<tam;i++){
		cout<<tipos[i].modelo<<" ";
		cout<<tipos[i].color<<" ";
		cout<<tipos[i].ancho<<" ";
		cout<<tipos[i].largo<<" ";
		cout<<" "<<endl;
	}
}