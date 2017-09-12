#ifndef MY_BULK_HPP
#define MY_BULK_HPP

#include "Quote.hpp"
#include "Disc_quote.hpp"
#include <string>

class MyBulk: public Disc_quote{
public:
    MyBulk() = default;
    MyBulk(const std::string &s, double p, size_t n = 0, double dis = 0.0):Disc_quote(s,p,n,dis){}
    double net_price(std::size_t n) const override;
};

double MyBulk::net_price(std::size_t n ) const{
    if(n< num){
        return n * (1-discount)*price; 
    }
    else{
        return n * price; 
    }
}
#endif //MY_BULK_HPP
