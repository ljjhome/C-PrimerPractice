#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Foo{
public:
    Foo()=default;
    Foo(initializer_list<int> il):data(il){}
    Foo(const Foo& f):data(f.data){}
    Foo sorted() &&{cout <<"sorted()&&.."<<endl;sort(data.begin(),data.end());return *this;}
    Foo sorted() const & {return Foo(*this).sorted();}
    void show(){
        for(auto i:data){
            cout <<i<<endl; 
        } 
    }
private:
    vector<int> data;
};
int main(){

    Foo f1{10,1,2,3,4,5};
    Foo ha = f1.sorted();
    ha.show();
    

    
}
