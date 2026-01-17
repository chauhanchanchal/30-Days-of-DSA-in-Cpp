//#include <iostream>
//using namespace std;
//int main() {
//
//    cout << "Demonstration of BREAK statement\n";
//    cout << "--------------------------------\n";
//
//    // BREAK example
//    for (int i = 1; i <= 10; i++) {
//        if (i == 5) {
//            break;   // exits the loop completely
//        }
//        cout << i << " ";
//    }
//
//    cout << "\n\n";
//
//    cout << "Demonstration of CONTINUE statement\n";
//    cout << "----------------------------------\n";
//
//    // CONTINUE example
//    for (int i = 1; i <= 10; i++) {
//        if (i == 5) {
//            continue;  // skips only this iteration
//        }
//        cout << i << " ";
//    }
//
//    cout << "\n";
//
//    return 0;
//}
//


#include <iostream>
using namespace std;
int main(){
  int i;

  cout<<"use of break statement"<<endl;

    for(int i=1;i<=10;i++){
        if(i==5){
            break;//exit from loop
        }
          
            cout<< i <<" " <<endl;    
        }
    
cout<<"use of continue statement"<<endl;
cout<<endl;
 
    for(int i=1;i<=10;i++){
     if(i==5){
         continue;//skip the current iteration
     }
        
         cout<< i <<"  "<<endl;   
     }
 cout<<endl;
 return 0;
    }
