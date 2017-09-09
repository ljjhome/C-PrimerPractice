#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;
class rep{
public:
    rep() = default;
    rep(const int in):value(in){}
    bool operator()(const int a,const int b){
        if(a < b)
            return true;
        else
            return false;
    }
    bool operator()(const int a){
        if(a<value)
            return true;
        else
            return false;
    }
private:
    int value;
};
int main(){
    rep r1(9);
    
    auto f = bind(r1,_1,6);
    vector<int> vi = {1,2,3,4,5,6,7,8,9};
    replace_if(vi.begin(),vi.end(),r1,10);
    for (auto i : vi){
        cout <<i<<endl; 
    }
}
