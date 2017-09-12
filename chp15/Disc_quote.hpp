#ifndef DISC_QUOTE_HPP
#define DISC_QUOTE_HPP

#include "Quote.hpp"
#include <string>
class Disc_quote : public Quote{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &s, double p, size_t n, double d): Quote(s,p),num(n),discount(d){}
    virtual double net_price(size_t n) const override = 0;
protected:
    size_t num;
    double discount;
};

#endif //DISC_QUOTE_HPP
