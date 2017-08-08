#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    cout<< "v1 .........."<<endl; 
    vector<int> v1;
    if (v1.size() == 0){
        cout << "v1 is empty"<<endl; 
    }else{
        for (auto r1 : v1){
            cout << r1 <<endl; 
        } 
    }

    cout<< "v2 .........."<<endl; 
    vector<int> v2(10);
    if (v2.size() == 0){
        cout << "v2 is empty"<<endl; 
    }else{
        for (auto r1 : v2){
            cout << r1 <<endl; 
        } 
    }

    cout<< "v3 .........."<<endl; 
    vector<int> v3(10,42);
    if (v3.size() == 0){
        cout << "v3 is empty"<<endl; 
    }else{
        for (auto r1 : v3){
            cout << r1 <<endl; 
        } 
    }

    cout<< "v4 .........."<<endl; 
    vector<int> v4{10};
    if (v4.size() == 0){
        cout << "v4 is empty"<<endl; 
    }else{
        for (auto r1 : v4){
            cout << r1 <<endl; 
        } 
    }

    cout <<"v5 .............:"<<endl;
    vector<int> v5{10,42};
    if (v5.size() == 0){
        cout << "v5 is empty"<<endl; 
    }else{
        for (auto r1 : v5){
            cout << r1 <<endl; 
        } 
    }

    cout <<"v6 .............:"<<endl;
    vector<string> v6{10};
    if (v6.size() == 0){
        cout << "v6 is empty"<<endl; 
    }else{
        for (auto r1 : v6){
            cout << r1 <<endl; 
        } 
    }

    cout <<"v7 .............:"<<endl;
    vector<string> v7{10,"hi"};
    if (v7.size() == 0){
        cout << "v7 is empty"<<endl; 
    }else{
        for (auto r1 : v7){
            cout << r1 <<endl; 
        } 
    }
}
