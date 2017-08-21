#include <vector>
#include <iostream>
using namespace std;
int my_sum(initializer_list<int> il){
    int sum = 0;
    for (auto it = il.begin(); it!=il.end();++it){
        sum += *it;
    }
    return sum;
}
int main(){
    
    int sum = 0;
    sum = my_sum({1,2,3,4,5,6});

    cout << "the sum is: "<<sum<<endl;
    vector<int> ivec{10,120,213};
    cout <<"the sum si : "<<my_sum(ivec)<<endl;
    return 0;
}
