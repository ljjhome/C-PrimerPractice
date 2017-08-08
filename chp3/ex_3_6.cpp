#include <string>
#include <iostream>

using namespace std;

int main(){
    
    string str;

    cout <<"Input string: "<<endl;
    while (cin>>str){
        for (auto &c : str){
            c ='X'; 
        } 
        cout<<"After replacement: "<<endl;
        cout << str<<endl;
    }
    return 0;
}
