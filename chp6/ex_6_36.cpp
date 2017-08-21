#include <iostream>
#include <vector>
#include <string>
using namespace std;
int t[5];
typedef int i_type[5];
int (*func(int a[5]))[5]{
    return &t;
}
int main(){
    
    int a[5] = {1,2,3,4,5};

}
