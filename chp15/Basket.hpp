#ifndef BASKET_HPP
#define BASKET_HPP
#include "Sales_data.hpp"
#include <set>
#include <memory>
#include "Quote.hpp"
class Basket {
	
public:
	void add_item(const Quote & sale){
		items.insert(std::shared_ptr<Quote>(sale.clone()));
	}
	void add_item(Quote && sale){
		items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
	}
	double total_receipt(std::ostream&) const;
private:
	static bool compareIsbn(const std::shared_ptr<Quote>& q1, const std::shared_ptr<Quote>& q2){
		return q1->isbn()<q2->isbn();	
	}
	std::multiset<std::shared_ptr<Quote>,decltype(compareIsbn)*> items{compareIsbn};
};

double Basket::total_receipt(std::ostream& os) const {
	double sum = 0.0;
	for(auto iter = items.begin();iter!=items.end();iter = items.upper_bound(*iter)){
		sum += print_total(os, **iter, items.count(*iter));
	}
	os<< "Total sale: " <<sum<<std::endl;
	return sum;
}



#endif //BASKET_HPP


