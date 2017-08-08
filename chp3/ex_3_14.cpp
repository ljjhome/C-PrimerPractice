#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int word;

    vector<int> vword;

    while(cin>>word){
     
        vword.push_back(word);
    }
    cout<<"the length of the vector: "<<vword.size()<<endl;
    return 0;
}
