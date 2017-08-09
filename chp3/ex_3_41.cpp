#include <vector>
#include <iostream>

using namespace std;
int main(){
    
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    vector<int> ivec(begin(a),end(a));

    for ( auto it = ivec.cbegin();it!=ivec.cend();it++){
        cout << *it<<endl;
    }
    vector<int> ivec2;
    ivec2 = vector<int>(a+2, a+5);
    cout << ivec2.size()<<endl;
    return 0;

}
