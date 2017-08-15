#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    string str, last_str;

    while(cin>>str){
        if(!isupper(str[0])){
            last_str = str;
            continue;
        }
        if(str!=last_str){
            last_str = str; 
        }else{
            break; 
        }
    }
    cout<<"same word"<<endl;
    return 0;
}
