#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person {

    friend istream & read(istream & is, Person & p);
    friend ostream & print(ostream &os, Person &p);
public:
    Person() = default;
    Person(const string na,const string ad);

    string getName() const;
    string getAddress() const;
private:
    string name;
    string address;
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
