#include <iostream>
#include <vector>

using namespace std;
int main(){
    
    int a[10];
    for (size_t id = 0;id<10;id++){
        a[id] = id;
        cout<<a[id]<<endl;
    }

    cout << ".................."<<endl;
    int b[10];
    for (size_t id = 0;id<10;++id){
        b[id] = a[id] *2;
        cout <<b[id]<<endl;
    }
    cout <<"...................."<<endl;
    vector<int> v;
    for (size_t id =0;id<10;++id){
        v.push_back(b[id]); 
    }
    for (auto it = v.cbegin();it!=v.cend();it++){
        cout << *it<<endl; 
    }
    return 0;
}
