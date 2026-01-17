#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;

    if(a>=b && a>=c) {
        cout<<"Largest number is a ="<<a<<endl;
    }else if(b>=a && b>=c){
        cout<<"largest number is b = "<<b<<endl;
    }else{
        cout<<"Largest number is c ="<<c<<endl;
    }
    return 0;
}