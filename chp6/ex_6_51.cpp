#include <string>
#include <vector>
#include <iostream>
using namespace std;
void f(){
    cout<< "f()"<<endl;
}
void f(int a){
    cout << "f(int)"<<a<<endl;
}
void f(int a,int b){
    cout <<"f(int, int)"<<a<<b<<endl; 
}
void f(double a, double b =3.14){
    cout <<"f(double, double b=3.14)"<<a<<b<<endl;
}
int main(){
//    f(2.56,42);
    f(42);
    f(42,0);
    f(2.56,3.14);
    return 0;
}
