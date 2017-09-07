#ifndef SALES_DATA_HPP
#define SALES_DATA_HPP

#include <string>
#include <iostream>

class Sales_data{
    
public:
    friend std::ostream& operator<<(std::ostream &, const Sales_data&);
    friend Sales_data operator+(const Sales_data&, const Sales_data&);
    friend Sales_data& operator>>(std::istream& is, Sales_data & sd);
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s, const unsigned units, const double rev):bookNo(s),units_sold(units),revenue(rev){}
    Sales_data(const Sales_data&sd):bookNo(sd.bookNo),units_sold(sd.units_sold),revenue(sd.revenue){}
    Sales_data& operator<<(const std::string& s){
        bookNo = s; return *this;
    } 
    void operator+=(const Sales_data& sd){
        units_sold += sd.units_sold;
        revenue += sd.revenue;
    }
    std::string isbn() const {return bookNo;}
private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

std::ostream & operator<<(std::ostream& os, const Sales_data& sd){
    os << "print the item...."<<std::endl;
    os<<"isbn : "<<sd.isbn()<<std::endl;
    os<<"units_sold : "<< sd.units_sold<<std::endl;
    os<<"revenue: "<<sd.revenue<<std::endl;
    return os;
}
Sales_data operator+(const Sales_data& sd1, const Sales_data & sd2){
    Sales_data st = sd1;
    st.units_sold+=sd2.units_sold;
    st.revenue+=sd2.revenue;
    return st;
}
Sales_data& operator>>(std::istream& is, Sales_data & sd){
    
    is>>sd.bookNo>>sd.units_sold>>sd.revenue;
    if(!is)
        sd = Sales_data();
    return sd;
}

#endif //SALES_DATA_HPP
