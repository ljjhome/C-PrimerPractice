#ifndef STR_HPP
#define STR_HPP
#include <memory>
#include <algorithm>
#include <stdio.h>
#include <iostream>
class Str{
public: 
    Str():elements(nullptr),cap(nullptr){}
    Str(const char* c);
    Str(const Str&);
    Str& operator=(const Str&);
    ~Str(){free();}
    size_t size() const{return cap - elements;}
    char* begin() const {return elements;}
    char* end() const {return cap;}
private:
    void free();
    static std::allocator<char> alloc;
    char* elements;
    char* cap;
};

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
