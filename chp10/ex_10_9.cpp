#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
void rmDups(vector<int> &vec){
    sort(vec.begin(),vec.end());
    auto end_unique = unique(vec.begin(),vec.end());
    vec.erase(end_unique,vec.end());
}
int main(){
    
    vector<int> ivec = {1,2,3,4,1,2,12,3,123,3,2,1,2,43,2};
    rmDups(ivec);
    cout << "the size of vec: "<<ivec.size()<<endl;

}
