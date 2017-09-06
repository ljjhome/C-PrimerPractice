#include "Str.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    
    Str s1("heihei");
    vector<Str> sv{"haha"};
    cout <<"push1.."<<endl;
    sv.push_back(s1);
    cout <<"push2.."<<endl;
    sv.push_back(s1);
    cout <<"push3.."<<endl;
    sv.push_back("shenme");
    cout <<"push4.."<<endl;
    sv.push_back("nimei");
    cout <<"push5.."<<endl;
    sv.push_back("diao");
    return 0;
}
