#include <string>
#include <iostream>
#include <vector>
#include "chapter6.h"
using namespace std;
double jjabs(double dval){
    return (dval>=0)?dval:-dval;
}

int main(){
    cout<<"input one number: "<<endl;
    int ival;
    while(cin>>ival){
        cout<<"the factal is : "<<fact(ival)<<endl; 
        cout <<" the absolute value of the input is : "<<jjabs(ival)<<endl;
        cout<<"input one number: "<<endl;
    }
    return 0;
}
int fact(int val){
    int result = 1;
    for (int i = 1;i<val;i++){
        result*=(i+1); 
    }
    return result;
}
