#include <iostream>
#include <vector>
using namespace std;
void my_print1(const int *beg, const int *end){
    while(beg!=end){
        cout << *beg++<<endl; 
    }
}
void my_print1(const int *a, size_t si){
    for(size_t i = 0;i<si;++i){
        cout << *(a+i)<<endl; 
    }
}
int main(){
    
    int a = 2, b[] = {4,5};

    int *b_beg = begin(b);
    int *b_end = end(b);
    my_print1(b_beg,b_end);

    my_print1(&a,1);
    return 0;
}
