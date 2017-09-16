#include "Quote.hpp"
#include "Bulk_quote.hpp"
#include <vector>
#include <memory>
using namespace std;
int main(){
	vector<Quote> vq;
	vq.push_back(Bulk_quote("ahha",2,10,0.5));
	cout << vq.back().net_price(20) <<endl;
	cout << "..................."<<endl;
	vector<shared_ptr<Quote>> vs;
	vs.push_back(make_shared<Bulk_quote>("ahha",2,10,0.5));
	cout << vs.back()->net_price(20) <<endl;
}
