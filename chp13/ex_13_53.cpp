#include "HasPtr.hpp"
#include <iostream>
#include <string>
using namespace std;
int main(){
    
    HasPtr p1("haha");
    HasPtr p2("woqu");
    HasPtr p3("woqu2");
    HasPtr p4("woqu3");

    p1 = p2;
    p3 = std::move(p4);



}
