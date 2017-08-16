#include <iostream>
using namespace std;
void reset(int &a){
    a = 0;
}
int main(){
    
    int ival;
    reset(ival);
    cout << "first test"<<ival<<endl;
    while(cin>>ival){
    
        reset(ival);
        cout << ival<<endl;
    }
    return 0;
}
