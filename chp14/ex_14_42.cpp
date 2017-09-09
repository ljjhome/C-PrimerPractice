#include <functional>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using namespace std::placeholders;
int main(){
    vector<int> iv = {1,2,3,4,5,6,7,8,9,9};
    vector<string> sv = {"haha","wo","nimei","shenme"};
    int num = count_if(iv.begin(),iv.end(),bind(greater<int>(),_1,3));
    cout << "larger than three: "<<num<<endl;

    auto it = find_if(sv.begin(),sv.end(), bind(equal_to<string>(),_1,"wo"));
    cout << *it<<endl;

    for_each(iv.begin(),iv.end(),bind(multiplies<int>(),_1,2));

    for(auto a:iv){cout << a << " ";}
    int n = 90;
    size_t hah = count_if(iv.begin(),iv.end(),bind(not_equal_to<int>(),bind(modulus<int>(),n,_1),0));
    if(hah == 0)
        cout<< "can be divide"<<endl;
    else
        cout << "can not be divide"<<endl;
}
