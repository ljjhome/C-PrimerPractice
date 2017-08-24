#include "ex_7_6.hpp"
#include <iostream>
#include <string>

using namespace std;
int main(){
    
    Sale_data total;
    if(read(cin,total)){
        Sale_data trans;
        while(read(cin,trans)){
            if(total.isbn() == trans.isbn()){
                add(total,trans);

            }else{
                print(cout, total)<<endl; 
                total = trans;
            } 
        }
        print(cout, total)<<endl;
    }else{
        cerr<<"no data"<<endl; 
    }
    return 0;
}
