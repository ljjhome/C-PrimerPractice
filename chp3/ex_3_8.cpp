#include <string>
#include <iostream>

using namespace std;

int main(){
    
    string str;
    cout<<"input string: "<<endl;

    while(cin>>str){
        string::size_type ct = 0;
        while(ct < str.size()){
            str[ct] = 'X'; 
            ct++;
        } 
        cout<< "after replacement: "<<endl<<str<<endl;
    }
    return 0;
}
