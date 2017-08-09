#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){
   
    cout << "..........................."<<endl;
    vector<int> v1;
    if (v1.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v1.cbegin(); it != v1.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "..........................."<<endl;
    vector<int> v2(10);
    if (v2.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v2.cbegin(); it != v2.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "..........................."<<endl;
    vector<int> v3(10,42);
    if (v3.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v3.cbegin(); it != v3.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "..........................."<<endl;
    vector<int> v4{10};
    if (v4.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v4.cbegin(); it != v4.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "..........................."<<endl;
    vector<int> v5{10,42};
    if (v5.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v5.cbegin(); it != v5.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "..........................."<<endl;
    vector<string> v6{10};
    if (v6.size() == 0){
        cout <<"empty vector"<<endl; 
    }else{
        for (auto it = v6.cbegin(); it != v6.cend(); it ++ ){
            cout << *it <<endl; 
        } 
    }
    cout << "............................."<<endl;
    vector<string> v7{10,"hi"};
    if (v7.size() == 0){
        cout<<"empty vector"<<endl; 
    }else{
        for (auto it = v7.cbegin(); it!=v7.cend(); it++){
            cout <<*it<<endl; 
        } 
    }
    return 0;
}
