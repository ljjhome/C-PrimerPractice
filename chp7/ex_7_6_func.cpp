#include "ex_7_6.hpp"

Sale_data & Sale_data::combine(const Sale_data &sa){
    units_sold += sa.units_sold;
    revenue += sa.revenue;
    return *this;
}
Sale_data::Sale_data(const std::string str):bookNo(str){}
Sale_data::Sale_data(const std::string str, unsigned units, double rev):bookNo(str),units_sold(units),revenue(rev){}
Sale_data::Sale_data(std::istream& is){
    
    read(is,*this);

}
std::istream &read(std::istream& is, Sale_data& item){
    double price = 0.0;
   is>>item.bookNo>>item.units_sold>>price;
   item.revenue = price * item.units_sold;
   return is;
}
std::ostream &print(std::ostream &os, const Sale_data &item){
    os<<item.bookNo<<" "<<item.units_sold<<" "<<item.revenue;
    return os;
}

void add(Sale_data & item1, const Sale_data &item2){
    item1.combine(item2);
}
