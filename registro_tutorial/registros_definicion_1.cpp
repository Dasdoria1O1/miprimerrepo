#include <iostream>

using namespace std;

int main()
{
    struct{
        string name;
        char init;
        int age;
        float note;
    } person;
    
    person.name = "Daniel";
    person.init = 'k';
    person.age = 23;
    person.note =3.5;
    
    cout<< person<<endl;
     cout<< person.name<<endl;
    cout<< person.init<<endl;
    cout<< person.age<<endl;
    cout<< person.note<<endl;
   
    

    return 0;
}