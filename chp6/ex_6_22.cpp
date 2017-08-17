#include <iostream>
using namespace std;

void swap_pointers(int *&a, int *&b){
    int *tmp = a;
    a = b;
    b = tmp;
}
int main(){
    
    int a =0; int b = 0;
    int *p_a = &a;
    int *p_b = &b;

    cout << "the address of a:"<<p_a<<endl;
    cout << "the address of b:"<<p_b<<endl;

    swap_pointers(p_a,p_b);
    cout << "the address of a:"<<p_a<<endl;
    cout << "the address of b:"<<p_b<<endl;
    return 0;
}
