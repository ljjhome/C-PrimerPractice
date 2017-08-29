#include <memory>
#include <iostream>
#include <string>

using namespace std;
int main(){
    
    int num = 3;
    allocator<string> alloc;

    auto const p = alloc.allocate(num);
    string stmp;
    auto q = p;
    while(cin>>stmp && q<p+num){
        alloc.construct(q++,stmp); 
        cout << *(q-1)<<endl; 
    }

}
