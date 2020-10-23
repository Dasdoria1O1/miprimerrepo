#include <iostream>

using namespace std;

int main()
{
   int array[]={12,20,5,2,8};
   int n,result=0;
   for(n=0; n<5; n++){
       result+=array[n];
   }
   cout<<result<<endl;
}