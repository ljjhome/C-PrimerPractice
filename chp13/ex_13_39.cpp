#include "StrVec.hpp"
#include <string>
#include <iostream>

using namespace std;
int main(){
    
    StrVec sv;
    sv.push_back("haha");
    sv.push_back("woqu");
    for(auto it = sv.begin();it != sv.end(); ++it){
        cout << *it<<endl; 
    } 
    sv.resize(10,"nima");
    for(auto it = sv.begin();it != sv.end(); ++it){
        cout << *it<<endl; 
    } 
    cout << "the size of sv is : "<<sv.size()<<endl;
}
