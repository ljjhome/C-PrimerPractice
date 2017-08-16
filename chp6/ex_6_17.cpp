#include <string>
#include <iostream>
using namespace std;
int find_upper(const string &s){
    int count_upper = 0;
    if (s.empty()){
        cout<< "the string is empty"<<endl; 
    }else{
        for (auto c:s){
            if(isupper(c)){
                ++count_upper;            
            } 
        } 
    }
    return count_upper;
}
void change_to_lower(string &s){
    if (s.empty()){
        cout<< "the string is empty"<<endl; 
    }else{
        for (auto &c:s){
            if(isupper(c)){
                c = tolower(c);
            } 
        } 
    }
    
}
int main(){
    
    string str;
    while(cin>>str){
        cout << "there are "<<find_upper(str)<<" upper letters"<<endl;     
        change_to_lower(str);
        cout << "after change to lower: "<<"\n"<<str<<endl;
    }
    return 0;
}
