#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    vector<int> ivec = {1,2,3,4,5,6};
    cout << ivec[3]<<endl;

    fill_n(ivec.begin(),ivec.size(),0);
    cout << ivec[3]<<endl;
    return 0;
}
