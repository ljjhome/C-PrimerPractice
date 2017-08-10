#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix!=ivec.size();++ix,--cnt){
     
        ivec[ix] = cnt;
        cout << ivec[ix]<<endl;
    }
    cout <<"......................"<<endl;
    vector<int> ivec2{1,2,3,4,5,6,7,8,9,10};
    vector<int>::size_type cnt2 = ivec2.size();
    for(vector<int>::size_type ix = 0; ix!=ivec2.size();++ix,cnt2--){
     
        ivec2[ix] = cnt2;
        cout << ivec2[ix]<<endl;
    }
    return 0;;
}
