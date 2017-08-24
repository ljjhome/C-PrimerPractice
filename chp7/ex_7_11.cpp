#include "ex_7_6.hpp"
#include <iostream>
using namespace std;
int main(){
    
    Sale_data s1;
    print(cout,s1)<<endl;
    Sale_data s2("haha");
    print(cout,s2)<<endl;
    Sale_data s3("haha1",3,10.0);
    print (cout,s3)<<endl;
    return 0;
}
