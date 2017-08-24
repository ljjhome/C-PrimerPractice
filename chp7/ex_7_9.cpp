#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
    Person() = default;
    Person(const string na,const string ad);
    string name;
    string address;

    string getName() const;
    string getAddress() const;
};
Person::Person(const string na, const string ad): name(na),address(ad){}
istream & read(istream & is, Person & p){
    is>>p.name>>p.address;
    return is;
}
ostream & print(ostream &os, Person &p){
    os<<p.name<<" "<<p.address<<" ";
    return os;
}
int main(){
    
}
