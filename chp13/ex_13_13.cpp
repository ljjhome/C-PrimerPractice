#include <iostream>
#include <string>
using namespace std;
struct X{
    X() {cout << "X()"<<endl;}
    X(const X&){cout << "X(const X&)"<<endl;}
    X& operator=(const X&){cout <<"X& operator=(const &X)"<<endl;
    return *this;}
    ~X(){cout <<"~X()"<<endl;} 
};
void func(X x){
   X x12; 
}
void funcr(X &x){
   X x13(x); 
}
int main(){
    cout << "default constructor......"<<endl;
    X x1, x2; 

    cout << "copy constructor........"<<endl;
    X x3(x1);
    cout << "copy assigmment........."<<endl;
    x2 = x3;
    cout << "nonreference argument........."<<endl;
    func(x1);
    cout << "refercence argument............"<<endl;
    funcr(x2);

    cout << "new test ..................."<<endl;
    X x4(x1);
    return 0;
}
