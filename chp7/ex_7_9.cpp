#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person {

    friend istream & read(istream & is, Person & p);
    friend ostream & print(ostream &os, Person &p);
public:
    Person(const string na = "haha") ;
    Person(const string na ,const string ad );

    string getName() const{
        return name; 
    };
    string getAddress() const;
    void copyPerson(const Person &p) const{
        cout << p.getName()<<endl; 
    }
private:
    string name;
    string address;
};
Person::Person(const string na, const string ad): name(na),address(ad){ cout <<"dele"<<endl;}
Person::Person(const string na):Person(na,""){cout <<"not dele 1 "<<endl; }
istream & read(istream & is, Person & p){
    is>>p.name>>p.address;
    return is;
}
ostream & print(ostream &os, Person &p){
    os<<p.name<<" "<<p.address<<" ";
    return os;
}
int main(){
    
    Person ab("nimei");
    ab.copyPerson(string("heihei"));

    return 0;

}
