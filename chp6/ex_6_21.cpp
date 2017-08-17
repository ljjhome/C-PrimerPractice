#include <iostream>
#include <vector>
using namespace std;
int my_compare(const int *a, const int b){
    return (*a>=b)?*a:b; 
}
int main(){

    int a =0,  b =0;
    while(cin>>a>>b){
        int maxval = my_compare(&a,b);
        cout << "the max value is : "<<maxval<<endl;
        cout << "input two numbers: "<<endl;
    }
    
    return 0;
}
