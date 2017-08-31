#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    
    cout << "We will accumulate the vector"<<endl; 

    vector<double> vint;
    double tmp;
    while(cin>>tmp){
        vint.push_back(tmp); 
    }

    double acc = accumulate(vint.begin(),vint.end(),0.1);
    cout << "the sum is : "<<acc<<endl;
    return 0;


}
