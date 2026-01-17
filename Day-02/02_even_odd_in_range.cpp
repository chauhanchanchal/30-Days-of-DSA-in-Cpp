#include<iostream>
using namespace std;
int main (){
    int start,end;
    cout<<"enter the start and end values of the range:";
    cin>>start>>end;

    cout<<"even number in given range are:"<<endl;

    for(int i=start;i<=end;i++){
        if(i%2==0){
            cout<<i<<" "; 
        }
    }
    cout<<endl;

 cout<<"odd number in given range are:"<<endl;
 for(int i=start;i<=end;i++){
     if(i%2!=0){
         cout<<i<<" ";
        }
     
    }
    return 0;
}