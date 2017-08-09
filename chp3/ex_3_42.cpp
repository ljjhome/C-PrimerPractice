#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

    int a[10];
    for (int i = 0;i<10;i++){
        a[i] = ivec[i];
        cout << a[i]<<endl;
    }
    return 0;
}
