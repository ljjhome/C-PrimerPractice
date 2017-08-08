#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str1, str2;
    cout<<"input first string: "<<endl;
    getline(cin, str1);
    cout<<"input second string :" <<endl;
    getline(cin, str2);

    if (str1 == str2){
        cout << "they are the same"<<endl; 
    }else{
        string tmp = str1>=str2?str1:str2;
        cout<<tmp<<" is larger."<<endl; 
    }

    string tmp2 = str1.size()>=str2.size()?str1:str2;
    cout<<tmp2<<" is longer in size."<<endl;
    return 0;

}
