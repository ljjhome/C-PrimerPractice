#ifndef QUOTE_HPP
#define QUOTE_HPP
#include <string>
#include <iostream>
class Quote{
public:
    Quote() = default;
    Quote(const std::string& book, double sales_price = 0.0):bookNo(book),price(sales_price){}
    std::string isbn() const {return bookNo;}
    virtual double net_price(std::size_t n) const{
        return n * price; 
    }
    virtual void debug(){
        std::cout<<"string bookNo;"<<"double price"<<std::endl; 
    }
    virtual ~Quote() = default;
private: 
    std::string bookNo;
protected:
    double price;
};

double print_total(std::ostream &os, const Quote &item, size_t n){
    double ret = item.net_price(n);
    os<<"ISBN: " << item.isbn()<< " # sold: " << n << " total due: " <<ret<< std::endl;
    return ret;
}

#endif //QUOTE_HPP
