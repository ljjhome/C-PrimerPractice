#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int main(){
    
    string str1;
    while(cin>>str1){
        const char* p = new char[3];
        p = str1.c_str();
        cout <<p<<endl;
    }
    return 0;
}
