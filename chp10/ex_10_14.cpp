#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    cout << "exercise 10.14.............."<<endl;
    auto f1 = [](const int a, const int b){
        return a + b; 
    };

    int a = 23, b =12;
    int sum = f1(a,b);
    cout << "The sum is : "<<sum<<endl;

    cout << "exercise 10.15.............."<<endl;
    auto f2 = [a](const int b){
        return a + b; 
    };
    cout << "the sum is : "<<f2(2)<<endl;
    return 0;
}
