#include <string>
#include <vector>
#include <iostream>
using namespace std;
class printString{
public:
    string operator()(istream &is){
        string hah;
        is>>hah;
        return hah;
    }
};
int main(){
    printString p1;
    vector<string> vs;
    int i = 0;
    while(i<4){
        i++;
        vs.push_back(p1(cin));
    }
    for(auto z:vs){
        cout << z<<endl; 
    }

    
}
