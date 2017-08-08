#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<string> vstr;
    for(unsigned int i = 0; i<10; i++){
        cout<< "THe "<<i<<"th string"<<endl;
        string tmp;
        cin>>tmp;
        vstr.push_back(tmp);
        
    }

    for (auto &str: vstr){
        if (str.size() != 0){
            for(auto &c : str){
                c = toupper(c);    
            } 
        }
    }
    for (auto str : vstr){
        cout<< str<<endl; 
    }

    return 0;
}
