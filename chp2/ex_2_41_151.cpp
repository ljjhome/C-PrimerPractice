#include <string>
#include <iostream>

struct Sales_data{
    std::string series_no;
    double price;
    unsigned int units_sold;
};

typedef Sales_data sd;
int main(){

    sd b1,b2;
    std::cout<<"Input series_no price units_sold for book1: "<<std::endl;
    std::cin>>b1.series_no>>b1.price>>b1.units_sold;
    
    std::cout<<"Input series_no price units_sold for book2: "<<std::endl;
    std::cin>>b2.series_no>>b2.price>>b2.units_sold;

    /* 1.20 print details*/
    std::cout<<"Now, print the details of book1: "<<std::endl;
    std::cout<<"SeriesNo. for book1 is: "<<b1.series_no<<std::endl;
    std::cout<<"price for book1 is: "<<b1.price<<std::endl;
    std::cout<<"units_sold for book1 is: "<<b1.units_sold<<std::endl;
    std::cout<<"Now, print the details of book2: "<<std::endl;
    std::cout<<"SeriesNo. for book2 is: "<<b2.series_no<<std::endl;
    std::cout<<"price for book2 is: "<<b2.price<<std::endl;
    std::cout<<"units_sold for book2 is: "<<b2.units_sold<<std::endl;

    /* 1.21 print the total*/

    if (b1.series_no == b2.series_no){
        std::cout<<"Total units_sold is: "<<b1.units_sold+b2.units_sold<<std::endl; 
        std::cout <<"Total price is: "<<b1.price*b1.units_sold+b2.price*b2.units_sold<<std::endl;
    }else{
        std::cout<<"series_no are different"<<std::endl; 
    }
    return 0;
}
