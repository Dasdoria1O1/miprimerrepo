#include <iostream>
using namespace std;

int main(){
    
    int num = (int) rand() % (100 - 5) + 5;  
    //int num = (int) rand() % (max - min) + min;  
    
   
    cout<<num<<endl;
    
    return 0;

}