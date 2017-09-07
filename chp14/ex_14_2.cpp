#include "Sales_data.hpp"
#include <string>
#include <iostream>
using namespace std;
int main(){
    Sales_data s1("haha",12,23.2);
    
    Sales_data s2("haha",11,123.2);
    Sales_data s3;
    s1+=s2;
    cout << s1;
    cin>>s3;
    cout << s3;
    return 0;
}
