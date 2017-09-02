#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
using namespace std::placeholders;
bool isLarger(int &a, const size_t sz){
    return a>static_cast<int>(sz);
}
int main(){
    string str = "siz";

    vector<int> ivec{1,2,3,4,5,6,7};
    auto it = find_if(ivec.begin(),ivec.end(),bind(isLarger,_1,str.size()));
    cout << "The first number larger than size(siz) is : "<<*it<<endl;

}
