#include "ex_7_6.hpp"
#include <iostream>
using namespace std;
int main(){
    
    Sale_data total(cin);
    if(!total.isbn().empty()){

        istream &is = cin;
        while(is){
            Sale_data trans(is);
            if(total.isbn() == trans.isbn()){
                add(total,trans); 
            }else{
                print(cout,total)<<endl; 
                total = trans;
            }
        } 
    }else{
        cout <<"no data"<<endl;
        return -1;
    }
    return 0;
}
