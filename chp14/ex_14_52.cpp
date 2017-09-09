#include <iostream>
#include <string>
using namespace std;
class SmallInt{
    friend SmallInt operator+(const SmallInt&, const SmallInt&);
public:
    SmallInt(int  = 0){
        cout << "using SmallInt(int i = 0)" <<endl;
    }
    operator int() const {
        cout<< "using operator int() const "<<endl;
        return val;}
private:
    size_t val;
};
SmallInt operator+(const SmallInt& s1, const SmallInt&){
    cout << "using SmallInt operator+(const SmallInt&, const SmallInt&)"<<endl;
    return  s1 ;
}

struct LongDouble{
    LongDouble(double  = 0.0){cout << "using LongDouble(double d = 0.0)"<<endl;}
    LongDouble operator+(const SmallInt& s){
        cout << "using LongDouble operator+(cosnt SmallInt&s)"<<endl; 
        return *this;
    }
    operator double() {
        double c = 0;
        cout <<"using operator double()"<<endl;
        return c; 
    }
    /*
    operator float(){
        float c = 0;
        cout << "using operator float()"<<endl;
        return c;
    }
    */
};
/*
LongDouble operator+(LongDouble& l1, double d){
    cout << "susing LongDouble operator+(LongDouble& l1, dobule)"<<endl;
    return l1 ;
}
*/
int main(){
    SmallInt si;
    LongDouble ld;
    ld = si+ld;
    ld = ld + si;
}
