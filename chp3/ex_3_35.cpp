#include <iostream>

using namespace std;

int main(){
    
    int a[10];

    int *pa = a;

    for( int i = 0 ; i< 10; i++){
        *(pa +i) = 1; 
        cout<<*(pa+i)<<endl;

    }
    return 0;
}