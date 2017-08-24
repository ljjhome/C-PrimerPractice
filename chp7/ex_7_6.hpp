#ifndef EX_7_6_HPP
#define EX_7_6_HPP
#include <string>
#include <iostream>

class Sale_data {
    //constructor
    friend void add(Sale_data &,const Sale_data&);

    friend std::istream &read(std::istream &is, Sale_data &item);
    friend std::ostream &print(std::ostream &os, const Sale_data &item);
public:
    Sale_data() = default;
    Sale_data(const std::string str);
    Sale_data(const std::string str, unsigned units, double rev);
    Sale_data(std::istream &is);
    std::string isbn() const {return bookNo;}
    Sale_data & combine(const Sale_data&);
private:
    inline double avg_price() const{
        return units_sold? revenue/units_sold:0; 
    }
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void add(Sale_data &,const Sale_data &);
std::istream &read(std::istream &is, Sale_data &item);
std::ostream &print(std::ostream &os, const Sale_data &item);


#endif //EX_7_6_HPP
