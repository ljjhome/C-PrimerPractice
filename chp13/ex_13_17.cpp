#include <iostream>
#include <string>
using namespace std;
class numbered{
    friend void f(numbered &s);
public:
    numbered():mysn(ncount){
        ++ncount; 
    }
    numbered(const numbered &n):mysn(ncount){
        ncount++; 
    }
    numbered& operator=(const numbered &n){
        mysn = ncount++; 
        return *this;
    }
private:
    int mysn;
    static int ncount;
};
int numbered::ncount = 0;
void f(numbered &s){cout << s.mysn<<endl;}
int main(){
    
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0;
}
