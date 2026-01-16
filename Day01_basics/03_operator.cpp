#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"enter two integers:";
    cin>>a>>b;
//arithmetic operators
    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"a % b = "<<a%b<<endl;
    cout<<"a ++ = "<<a++<<endl;
    cout<<"++ a = "<<++a<<endl;
    cout<<"b -- = "<<b--<<endl;
    cout<<"-- b = "<<--b<<endl;

    //relational operators
    cout<<"a==b = "<<(a==b)<<endl;
    cout<<"a!=b = "<<(a!=b)<<endl;
    cout<<"a>b = "<<(a>b)<<endl;
    cout<<"a<b = "<<(a<b)<<endl;
    cout<<"a>=b = "<<(a>=b)<<endl;
    cout<<"a<=b = "<<(a<=b)<<endl;

    //logical operators
    cout<<"(a==b)&&(a<b) = "<<((a==b)&&(a<b))<<endl;
    cout<<"(a==b)||(a<b) = "<<((a==b)||(a<b))<<endl;
    cout<<"!(a==b) = "<<(!(a==b))<<endl;

    return 0;
}