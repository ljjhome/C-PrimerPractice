#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    vector<string> vstr{"how","now","now","now","brown","cow","cow"};

    auto it = vstr.cbegin();
    string comstr, maxstr;
    unsigned max_count = 1, tmp_count = 1;
    comstr = *it;
    while(++it!=vstr.cend()){
        if(*it == comstr){
            ++tmp_count; 
            cout <<"tmp_count is : "<<tmp_count<<endl;
        }else{
            comstr = *it;
            if(max_count<tmp_count){
             
                max_count  = tmp_count;
                maxstr = *(it -1);
                cout << maxstr << " is max string"<<endl;
            }
            tmp_count = 1;

        } 
    }
    if(max_count > 2){
        cout << "word: "<<maxstr<<" appear "<<max_count<<"times"<<endl; 
    }else{
        cout<<"no repeatable word"<<endl; 
    }
    return 0;
}
