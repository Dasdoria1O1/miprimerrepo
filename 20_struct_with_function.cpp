#include <iostream>
using namespace std;

struct estructura_amigo{
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};

struct estructura_amigo amigo={
	"william","lopez","32423423",23
};

int suma(struct estructura_amigo);
int main(){
	printf("%s tiene ",amigo.apellido );
	printf("%i anos ",amigo.edad );
	printf(" y dentro de 20 anos tendra %i\n  ",suma(amigo) );
}

int suma(struct estructura_amigo mi_struct){
	return mi_struct.edad+20;
}

