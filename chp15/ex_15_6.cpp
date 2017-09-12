#include "Quote.hpp"
#include "Bulk_quote.hpp"
#include "Disc_quote.hpp"
#include <iostream>

using namespace std;

int main(){
    Quote q1("haha",10);
    Bulk_quote bq1("woqu",200,12,0.7);
    //Disc_quote d1("woc",21,2,2);
    print_total(cout, q1,20);
    print_total(cout, bq1,20);
    return 0;
}
