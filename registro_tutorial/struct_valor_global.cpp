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

int suma(int parametro);
int main(){
	printf("%s tiene ",amigo.apellido );
	printf("%i anos ",amigo.edad );
	printf(" y dentro de 20 anos tendra %i\n  ",suma(amigo.edad) );
}

int suma(int mi_edad ){
	return mi_edad+20;
}
