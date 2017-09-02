#include <iostream>
using namespace std;
int main(){
    
    int a = 10;
    auto f = [](int b)->bool{
        while(b>=0 && --b){} 
        return !static_cast<bool>(b);
    };
    cout << f(a)<<endl;
}
