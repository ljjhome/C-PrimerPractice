#include "StrBlobPtr.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    const StrBlob strb{"wo","shi","shui"};
    ConstStrBlobPtr strbp(strb);
/*
    for(StrBlobPtr pbeg(strb.begin()),pend(strb.end());pbeg!=pend;pbeg.incr()){
        cout << 
    }
    */
      
    while(strbp.deref()!=strb.end().deref()){
        cout << strbp.deref()<<endl;
        strbp.incr();
    }
     
    return 0;

}
