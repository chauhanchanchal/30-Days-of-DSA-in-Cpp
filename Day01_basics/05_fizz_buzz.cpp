// FIZZ_BUZZ

#include <iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter the value if n:";
 cin>>n;
 for(int i=1;i<=n;i++)
  if(i%3==0 && i%5==0)
    cout<<"Fizzbuzz"<<endl;
    else if(i%3==0)
        cout<<"fizz"<<endl;
    else if(i%5==0)
        cout<<"buzz"<<endl;
    else
        cout<<i<<endl;
  
  
  
} 
//time complexity: O(n)
//space complexity: O(1)