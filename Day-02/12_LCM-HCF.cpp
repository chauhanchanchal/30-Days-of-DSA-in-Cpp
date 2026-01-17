#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter two numbers to find LCM and HCF:"<<endl;
    cin>>n;
    int m;
    cin>>m;
    int hcf, lcm;
    // HCF calculation
     for(int i=1;i<=n && i<=m;i++){
         if(n%i==0 && m%i==0){
             hcf=i;
         }
     }
    // LCM calculation
    lcm=(n*m)/hcf;//
    cout<<"HCF of "<<n<<" and "<<m<<" is: "<<hcf<<endl;
    cout<<"LCM of "<<n<<" and "<<m<<" is: "<<lcm<<endl;
    return 0;

}