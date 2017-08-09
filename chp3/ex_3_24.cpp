#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    vector<int> ivec;
    int tmp;
    cout<<"input number array:"<<endl;
    while ( cin >> tmp){
        ivec.push_back(tmp); 
    }

    cout<<"print the sum of two adjacent number: "<<endl;
    for (auto beg = ivec.cbegin(); beg!=ivec.cend()-1;beg++){
        cout << *beg + *(beg +1)<<endl; 
    }
    cout<<"print the sum of number from start and end: "<<endl;
    for (auto beg = ivec.cbegin(), end = ivec.cend()-1; beg<=end;beg++,end-- ){
        cout<< *beg + *end<<endl; 
    }
    return 0;
}
