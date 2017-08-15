#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    vector<int> ivec1{0,1,1,2};
    vector<int> ivec2{0,1,1,2,3,5,8};

    vector<int> short_vec = (ivec1.size()>ivec2.size())?ivec2:ivec1;
    vector<int> long_vec = (ivec1.size()>ivec2.size())?ivec1:ivec2;
    auto it_short = short_vec.cbegin();
    auto it_long = long_vec.cbegin();
    for(;it_short!=short_vec.cend()&& *it_short == *it_long;++it_short,++it_long){
     
    }
    if(it_short!=short_vec.cend()){
        cout<<"not a prefix"<<endl; 
    }else{
        cout << "is a prefix"<<endl; 
    }
    return 0;
}
