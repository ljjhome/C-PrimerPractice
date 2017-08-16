#include <iostream>
using namespace std;
int call_count(){
    static int num_count =0;
    ++num_count;
    return num_count;
}
int main(){
    
    int tmp;
    while(cin>>tmp){
        cout << call_count()<<endl; 
    }
    return 0;
}
