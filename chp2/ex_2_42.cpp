#include <string>
#include <iostream>
#include "Sales_data.hpp"
typedef Sales_data sd;
int main(){
   sd book1;
   book1.price = 1000.00;
   std::cout << "book1.price : "<<book1.price<<std::endl;
   return 0;

}
