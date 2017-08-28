#include <vector>
#include <iostream>
#include <memory>
using namespace std;
void my_print(ostream &os, const vector<int> &iv){
    for(auto it = iv.cbegin();it!=iv.cend();++it){
        os<<*it<<endl; 
    }
}
void my_print(ostream& os, shared_ptr<vector<int>> sp){
    
    for(auto it = sp->cbegin();it!=sp->cend();++it){
        os<<*it<<endl; 
    }
}
int main(){
    
    auto pv = new vector<int>;
    int tmp;
    while(cin>>tmp){
        pv->push_back(tmp); 
    }
    my_print(cout,*pv);

    delete pv;

    cout<<"haha"<<endl;
    shared_ptr<vector<int>> sp = make_shared<vector<int>>();
    cin.clear();
    cin.ignore(1000,'\n');
    while(cin>>tmp){
        sp->push_back(tmp); 
    }
    my_print(cout,sp);
    return 0;
}
