#include <iostream>
#include <string>
using namespace std;
struct Sale_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sale_data & combine(const Sale_data &sa);
    string isbn(){return bookNo;}
};
Sale_data & Sale_data::combine(const Sale_data &sa){
    units_sold += sa.units_sold;
    revenue += sa.revenue;
    return *this;
}
int main(){
    Sale_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sale_data trans;
        while(cin>>trans.bookNo>>trans.units_sold>>trans.revenue){
            if(total.isbn() == trans.isbn()){
                total.combine(trans); 
            }else{
                cout << total.isbn()<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                total = trans;
            } 
        }
        cout << total.isbn()<<" "<<total.units_sold<<" "<<total.revenue<<endl;

    }else{
        cout <<"no data?"<<endl; 
    }
    return 0;
}
