#include <string>
#include <iostream>

using namespace std;

class HasPtr{
public:

    HasPtr(const string &s = string()):ps(new string(s)),i(0),use(new size_t(1)){}
    HasPtr(const HasPtr& ph):ps(ph.ps),i(ph.i), use(ph.use){
        ++*use; 
    }
    HasPtr& operator=(const HasPtr& ph){
        ++*ph.use;
        if(--*use == 0){
            delete ps;
            delete use;
        }
        ps = ph.ps;
        use = ph.use;
        i = ph.i;
        return *this;
    }
private:
    string * ps;
    int i;
    size_t *use;
};
