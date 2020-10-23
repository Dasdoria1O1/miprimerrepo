#include <iostream>

using namespace std;

int main()
{
   int array[]={10,20,30,40,50,1,2,3,4,5};
   int tamano=sizeof(array)/sizeof(array[0]);
   cout<<"el tamaño de la listas es: "<<tamano<<endl;
   cout<<sizeof(array)<<endl;
   cout<<sizeof(array[0]);
}
