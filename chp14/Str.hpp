#ifndef STR_HPP
#define STR_HPP
#include <memory>
#include <algorithm>
#include <stdio.h>
#include <iostream>
class Str{
public: 
    friend bool operator<(const Str& s1, const Str& s2);
    Str():elements(nullptr),cap(nullptr){}
    Str(const char* c);
    Str(const Str&);
    Str(Str &&) noexcept;
    Str& operator=(const Str&);
    char & operator[](size_t num){
        return *(elements+num); 
    }
    const char & operator[](size_t num) const {
        return *(elements+num); 
    }
    ~Str(){free();std::cout << "free().."<<std::endl;}
    size_t size() const{return cap - elements;}
    char* begin() const {return elements;}
    char* end() const {return cap;}
private:
    void free();
    static std::allocator<char> alloc;
    char* elements;
    char* cap;
};

bool operator<(const Str& s1, const Str& s2){
    size_t sz = (s1.size()<s2.size())?s1.size():s2.size();
    for(size_t i = 0;i != sz; ++i){
        if(*(s1.elements+i) < *(s2.elements + i))
            return true;
        else if(*(s1.elements+i) > *(s2.elements + i))
            return false;
    }
    if(s1.size()<s2.size())
        return true;
    else 
        return false;
}
std::allocator<char > Str::alloc;
Str::Str(const char* c){
    size_t i = 0;
    const char * be = c;
    while(*be != '\0'){
        ++i;
        ++be;
    }
    elements = alloc.allocate(i);
    be = c;
    for(auto it = elements;it !=elements+i ;){
        alloc.construct(it++, *be++); 
    }
    cap = elements + i;
}
Str::Str(const Str& s){
     elements= alloc.allocate(s.size());
     cap= std::uninitialized_copy(s.begin(),s.end(),elements);
     std::cout << "Str(const Str& s)..."<<std::endl;
}

Str::Str(Str &&s) noexcept {
    elements = s.elements;
    cap = s.cap;
    s.elements = s.cap = nullptr;
    std::cout<<"Str(Str&&) noexcept.. "<<std::endl;
}
Str& Str::operator=(const Str& s){
    auto datanew = alloc.allocate(s.size());
    auto cpat = std::uninitialized_copy(s.begin(),s.end(),datanew);
    free();
    elements = datanew;
    cap = cpat;
    std::cout << "Str::operator=(const Str& s) "<<std::endl;
    return *this;
}
void Str::free(){
    if(size() != 0){
        std::for_each(elements,cap,[](char& pc){alloc.destroy(&pc);});     
    }
    alloc.deallocate(elements,size());
}

#endif //STR_HPP
