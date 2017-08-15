#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    do{
        string str1,str2;
        cout << "input two strings: "<<endl;
        cin>>str1>>str2;
        string short_str = (str1.size()>str2.size())?str2:str1;
        cout<<"The shorter string is : "<<short_str<<endl;
    }while(cin);
    return 0;
}
