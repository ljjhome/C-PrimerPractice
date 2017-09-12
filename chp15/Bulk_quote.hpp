#ifndef BULK_QUOTE_HPP
#define BULK_QUOTE_HPP
#include "Quote.hpp"
#include "Disc_quote.hpp"
class Bulk_quote: public Disc_quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string & s, double price, std::size_t sz = 0, double dis = 0.0): Disc_quote(s,price,sz,dis){}
    double net_price(std::size_t n) const override;
    void debug() override{
        std::cout << "string bookNo;"<<"double price;" <<"size_t min_qty;"<<"double discount;"<<std::endl;
    }
};

double Bulk_quote::net_price(size_t n ) const{
    if(n >= num){
        return n * (1 - discount) * price; 
    }
    else{
        return n * price; 
    }
}

#endif //BULK_QUOTE_HPP
