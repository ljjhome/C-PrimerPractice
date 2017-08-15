#include <iostream>
#include <vector>

using namespace std;
int main(){
    
    vector<int> ivec{1,3,0,5,10,23,14,24};
    auto it = ivec.cbegin();
    int t;
    while(t = (*it++)){cout <<"haha"<<endl;}
}
