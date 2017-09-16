#ifndef DISC_QUOTE_HPP
#define DISC_QUOTE_HPP

#include "Quote.hpp"
#include <string>
class Disc_quote : public Quote{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &s, double p, size_t n = 0, double d= 0.0): Quote(s,p),num(n),discount(d){}
    Disc_quote(const Disc_quote& dq):Quote(dq),num(0),discount(0.0){std::cout<<"Disc_quote(const Disc_quote &)"<<std::endl;}
    virtual double net_price(size_t n) const override = 0;
	virtual ~Disc_quote(){std::cout<<"~Disc_quote()"<<std::endl;}
protected:
    size_t num;
    double discount;
};

#endif //DISC_QUOTE_HPP
