#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    do{
        int v1, v2;
        cout << "please entor two number:"<<endl;
        if(cin>>v1>>v2){
            cout << "Sum is: "<<v1+v2<<endl; 
        }
    }while(cin);
    return 0;
}
