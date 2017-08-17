#include <iostream>
#include <vector>
using namespace std;
void my_print(const int a[10]){
    const int * be = begin(a);
    for (int i =0;i<11;i++){
        cout << a[i]<<endl; 
    }
}
void myp(const int (&a)[10]){
    
    const int * be = begin(a);
    for (int i =0;i<11;i++){
        cout << a[i]<<endl; 
    }
}
int main(){
    
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    my_print(a);
    myp(a);
    return 0;
}
