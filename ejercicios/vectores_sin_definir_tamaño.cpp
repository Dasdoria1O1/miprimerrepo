#include <iostream>
#include <vector>
using namespace std;


int main()
{      
    
  vector<int> test1;
  int tamano=5;
 
    for (int i = 0; i <= tamano; ++i){
      test1.push_back(i);
    }
    
    for (int i = 0; i <= tamano; ++i){
      cout<<test1[i]<<endl;
    }

return 0;
} 