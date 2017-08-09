#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    
    string str1,str2;
    cout <<"intput two string"<<endl;
    cin >>str1>>str2;
    if(str1 == str2){
        cout <<"same string"<<endl; 
    }else if( str1 > str2){
        cout << "str1 is larger"<<endl; 
    }else{
        cout << "str2 is larger"<<endl; 
    }

    char c1[15],c2[15];
    cout << "input two char string: "<<endl;
    cin >> c1 >> c2;
    int flag = strcmp(c1,c2);
    if (flag>0){cout<<"c1 is larget"<<endl;}
    else if (flag == 0){cout << "they are same"<<endl;}
    else{cout<<"c2 is larger"<<endl;}
}
