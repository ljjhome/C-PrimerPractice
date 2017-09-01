#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
bool isLarger(const int &a, const int &b){
    return a>b;
}
void rmDups(vector<int> &vec){
    sort(vec.begin(),vec.end());
    auto end_unique = unique(vec.begin(),vec.end());
    vec.erase(end_unique,vec.end());
}
int main(){
    
    vector<int> ivec = {1,2,3,4,1,2,12,3,123,3,2,1,2,43,2};
    rmDups(ivec);
    stable_sort(ivec.begin(),ivec.end(),isLarger);
    for(auto item: ivec){
        cout << item <<endl; 
    } 
    cout << "the size of vec: "<<ivec.size()<<endl;

}
