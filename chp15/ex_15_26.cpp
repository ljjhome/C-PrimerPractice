#include "Quote.hpp"
#include "Bulk_quote.hpp"
#include "Disc_quote.hpp"
#include <iostream>
using namespace std;
int main(){
    Quote q1("haha");
    Quote q2(q1);

    cout << "................"<<endl;
    Bulk_quote b1("shenme",12);
	Bulk_quote b2(b1);

	cout << "................"<<endl;
}
