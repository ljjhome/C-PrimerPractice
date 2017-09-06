#include "Str.hpp"
#include <iostream>
using namespace std;
int main(){
    const char * c =  "haha nimei" ;
    Str s1(c)  ;
    cout << "haha"<<endl;
    for(auto it = s1.begin(); it != s1.end(); ++it){
        cout << *it <<endl; 
    }
}
