#include <iostream>
using namespace std;
class Nodefault {
public:
    Nodefault(int a ):mem(a){
    }
private:
    int mem;
};

class C{
    
public:
    C(int a = 0):it1(a){}
    Nodefault it1;
};
int main(){
    C c1;
    return 0 ;
}
