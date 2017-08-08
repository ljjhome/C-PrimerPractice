#include <string>
#include <iostream>

using namespace std;

int main(){
    /* 
    string line;
    while(getline(cin,line)){
        cout<<line<<endl; 
    }
    string word;
    while(cin>>word){
        cout<<word<<endl; 
    }
    */
    for (string str; cin>>str;cout<<str<<endl);
    return 0;
}
