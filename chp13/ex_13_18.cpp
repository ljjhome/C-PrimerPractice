#include <iostream>
#include <string>
using namespace std;
class Employee{
public:
    Employee();
    Employee(const string &na);
    Employee(Employee& e) = delete;
    Employee& operator=(const Employee&) = delete;
private:
    string name;
    int id;
    static int id_gen;
};
Employee::Employee(){id = id_gen++;}
Employee::Employee(const string &na):name(na),id(id_gen++){}
int Employee::id_gen = 0;
int main(){
    
    return 0;

}
