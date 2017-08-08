#include <string>
#include <iostream>

using namespace std;

int main(){
    
    string str;
    cout << " input string : "<<endl;
    getline(cin, str);
    string result;
    for (auto c : str){
        if(!ispunct(c)){
            result+=c; 
        } 
    }
    cout <<"result is : "<<result<<endl;
    return 0;
}
