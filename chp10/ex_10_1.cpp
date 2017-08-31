#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
int main(){
    
    cout << "we will count the number: 2 "<<endl;
    const int num = 2;

    vector<int> vint;
    int tmp;
    while(cin>>tmp){
        vint.push_back(tmp); 
    }

    int ncount = count(vint.begin(),vint.end(),num);
    cout << " the number : 2 appears "<<ncount<<" times"<<endl;
    return 0;

}
