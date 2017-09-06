#ifndef HASPTR_HPP
#define HASPTR_HPP

#include <string>
#include <iostream>
class HasPtr{
public:
    friend void swap(HasPtr&, HasPtr&);
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)), i(0){}
    HasPtr(const HasPtr &p):ps(new std::string(*p.ps)),i(p.i){}
    HasPtr& operator=(const HasPtr &);
    HasPtr& operator=(HasPtr &&);
 //   HasPtr& operator=(HasPtr rhs);
    ~HasPtr(){delete ps;}
    void show(){std::cout<<*ps<<std::endl;}
private:
    std::string* ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs){
    auto newp = new std::string(*rhs.ps);
    delete ps;
    ps = newp;
    i = rhs.i;
    std::cout <<"operator=(const HasPtr& rhs)"<<std::endl;
    return *this;
}

/*
HasPtr& HasPtr::operator=(HasPtr rhs){
    swap(*this, rhs);
    std::cout <<"operator=(HasPtr rhs)"<<std::endl;
    return *this;
}
*/
HasPtr& HasPtr::operator=(HasPtr &&hp){
    ps = hp.ps;
    i = hp.i;
    hp.ps = nullptr;
    std::cout <<"operator=(HasPtr &&hp)"<<std::endl;
    return *this;
}
void swap(HasPtr& lhs, HasPtr& rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}
#endif //HASPTR_HPP
