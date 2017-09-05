#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class HasPtr{
public:
 //   friend void swap(HasPtr &,HasPtr &);

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
    ~HasPtr(){
        if(--*use == 0){
            delete ps;
            delete use;
        } 
    }
    inline bool operator<(const HasPtr& h1) const {
        return ps->size()<h1.ps->size(); 
    }
    void show(){
        cout << *ps<<endl;  
    }
private:
    string * ps;
    int i;
    size_t *use;
};
/*
void swap(HasPtr & h1, HasPtr & h2){
    using std::swap;
    swap(h1.ps, h2.ps);
    swap(h1.use, h2.use);
}
*/
int main(){
    
    vector<HasPtr> vh{string("haha"),string("h")};
    
    sort(vh.begin(),vh.end());
    for(auto it = vh.begin();it !=vh.end();++it){
        (*it).show();
    }
}
