#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    vector<int> v1,v2;
    
    cout<<"input v1 : "<<endl;
    int tmp;
    while(cin>>tmp){
        v1.push_back(tmp); 
    }
    cout<<"input v2 : "<<endl;
    cin.clear(); cin.ignore(1000,'\n');
    while(cin>>tmp){
        v2.push_back(tmp); 
    }

    if (v1 == v2){cout<<"same vector";}
    else{cout<<"differenct vecotr";}

    cout << "input array1: "<<endl;
    cin.clear(); cin.ignore(1000,'\n');
    int a1[3];
    for (int i = 0; i<3; i++){
        cin>>a1[i]; 
    }
    cout << "input array2: "<<endl;
    cin.clear(); cin.ignore(1000,'\n');
    int a2[3];
    for (int i = 0; i<3; i++){
        cin>>a2[i]; 
    }

    bool flag;
    for (int i = 0 ; i< 3 && a1[i] == a2[i]; i++){
        if (i == 2)
            flag = true;

    }
    if (flag)
        cout << "same array"<<endl;
    else 
        cout << "different array"<<endl;

    return 0;



}
