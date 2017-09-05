#include <iostream>
#include <string>
using namespace std;
class HasPtr{
public:
    HasPtr(const string &s = string()):ps(new string(s)),i(0){}
    HasPtr(const HasPtr &p):ps(new string(*(p.ps))),i(p.i){}
    HasPtr& operator=(const HasPtr &p){
        *ps = *(p.ps);
        i = p.i;
        return *this;
    }
    ~HasPtr(){
        delete ps; 
    }
    void printm(ostream& os){
        os<< *ps<<endl; 
    }
private:
    string *ps;
    int i;
};
int main(){
    
    HasPtr p1, p2 =string("haha") ;
    p2 = p2;
    p2.printm(cout);
}
