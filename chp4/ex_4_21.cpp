#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    vector<int> ivec;
    int tmp;
    while(cin>>tmp){
        ivec.push_back(tmp); 
    }

    for (auto pbeg = ivec.begin();pbeg!=ivec.end();++pbeg){
        *pbeg = (*pbeg%2)?*pbeg*2:*pbeg;
        cout << *pbeg<<endl;
    }
    return 0;
}
