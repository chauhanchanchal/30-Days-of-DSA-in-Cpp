#include <iostream>
using namespace std;
int main (){
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
//forloop
    for(int i=n;i>0;i=i/10){
        count++;
    }
    cout<<"Number of digits in "<<n<<" is: "<<count<<endl;
    return 0;

//while loop
      while(n>0){
        count++;
        n=n/10;
    }
//do while loop
    do{ n=n/10;
        count++;
    }while(n>0);
    cout<<"Number of digits is: "<<count<<endl;
    return 0;


  cout<<"Number of digits in "<<n<<" is: "<<count<<endl;


    return 0;

}