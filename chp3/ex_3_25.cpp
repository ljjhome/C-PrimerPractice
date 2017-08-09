#include <vector>
#include <iostream>

using namespace std;
int main(){
    
    vector<unsigned int> scores(11,0);
    unsigned int grade;
    while(cin>>grade){
        auto it = scores.begin()+grade/10;
        *it += 1;
    }
    for (auto beg = scores.cbegin();beg!=scores.cend();beg++){
        cout<<" "<<*beg; 
    }
    return 0;
}
