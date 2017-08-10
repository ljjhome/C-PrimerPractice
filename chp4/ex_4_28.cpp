#include <iostream>

using namespace std;
int main(){
    
    int a, *pa;
    double b;
    float c;
    char d, *pd;

    cout << "size of int a: "<<sizeof a <<endl;
    cout << "size of int *pa: "<<sizeof *pa<<endl;
    cout << "size of double b: "<<sizeof b<<endl;
    cout <<"size of float c: "<<sizeof c<<endl;
    cout << "size of char d: "<<sizeof d<<endl;
    cout << "size of char *pd: "<<sizeof pd<<endl;

    return 0;
}
