#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Sale_data{
public:
    Sale_data() = default;
    Sale_data(const char* str):bookNo(str){}
    Sale_data(const string & str):bookNo(str){}
    string isbn() const{return bookNo;}
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};
bool isLonger(const Sale_data& a, const Sale_data &b){
    return a.isbn().size() > b.isbn().size();
}

bool ShorterThan5(const Sale_data& d){
    return d.isbn().size()<5;
}
void biggies(vector<Sale_data> &svec, string::size_type sz){
    auto it = partition(svec.begin(),svec.end(),[sz](const Sale_data& sd){return sd.isbn().size()<sz;});
    for_each(it,svec.end(),[](const Sale_data& sd){cout << sd.isbn()<<endl;});
     
    
}
int main(){
    
    const string ha = "aa";

    Sale_data d = "haha";
    Sale_data ae = ha;
    vector<Sale_data> svec{"aaaaaaa","bbb","ccccaaaa","ddddd"};

    biggies(svec,1);
    biggies(svec,4);
    //stable_sort(svec.begin(),svec.end(),isLonger);

    /*
    auto it = partition(svec.begin(),svec.end(),ShorterThan5);
    for(;it != svec.end();++it){
        cout << (*it).isbn()<<endl; 
    }
    */
    return 0;
}
