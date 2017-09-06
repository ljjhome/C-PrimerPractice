#ifndef STRVEC_HPP
#define STRVEC_HPP

#include <string>
#include <memory>
#include <algorithm>
class StrVec{
public:
    StrVec():elements(nullptr),first_free(nullptr), cap(nullptr){}
    StrVec(std::initializer_list<std::string> il);
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    ~StrVec();
    void push_back(const std::string &str);
    size_t size() const {return first_free - elements;}
    size_t capacity() const {return cap - elements;}
    std::string *begin() const {return elements;}
    std::string *end() const {return first_free;}
    void resize(size_t sz,std::string s);
    void reserve(size_t n);

private:
    static std::allocator<std::string> alloc;
    void chk_n_alloc(){
        if (size() == capacity()) reallocate(); 
    }
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string*, const std::string*);
    void free();
    void reallocate();
    std::string* elements;
    std::string* first_free;
    std::string* cap;
};

void StrVec::reserve(size_t n){
    if(n>capacity()){
        auto datanew = alloc.allocate(n);
        auto dest = datanew;
        auto elem = elements;
        for (size_t i = 0;i!=n;++i)
            alloc.construct(dest++,std::move(*elem++));
        free();
        elements = datanew;
        first_free = dest;
        cap = elements + n;
    }
}
void StrVec::resize(size_t sz, std::string s = std::string()){
    if(sz <= size()){
        for (auto it = first_free; it != elements + sz;){
            alloc.destroy(--it); 
        } 
        first_free = elements+sz;
    }else if(sz > size() && sz<=capacity()){
        for (auto it = first_free; it != elements + sz;){
            alloc.construct(it++,s); 
        } 
    }else{
        auto datanew = alloc.allocate(sz);

        auto dest = datanew;
        auto elem = elements;
        for(size_t i = 0; i != size(); ++i ){
            alloc.construct(dest++,std::move(*elem++));
        }
        free();
        elements = datanew;
        first_free = dest;
        cap = elements + sz;

        for (auto it = first_free; it != cap;){
            alloc.construct(it++,s); 
        }
        first_free = cap;

    }
}
std::allocator<std::string> StrVec::alloc;
StrVec::StrVec(std::initializer_list<std::string> il){
    elements = alloc.allocate(il.size()*2);
    first_free = uninitialized_copy(il.begin(),il.end(),elements);
    cap = elements + il.size()*2;
}

StrVec::StrVec(const StrVec& sv){
    elements = alloc.allocate(sv.capacity());
    first_free = uninitialized_copy(sv.elements,sv.first_free,elements);
    cap = elements+sv.capacity();
}

StrVec& StrVec::operator=(const StrVec& sv){
    this->free();
    elements = alloc.allocate(sv.capacity());
    first_free = uninitialized_copy(sv.elements,sv.first_free,elements);
    cap = elements+sv.capacity();
    return *this; 
}

std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string* ps1, const std::string* ps2){
    auto data = alloc.allocate(ps1 - ps2);
    return {data, uninitialized_copy(ps1,ps2,data)};
}

void StrVec::reallocate(){
    auto newcap = size()?2*size():1;
    auto newdata = alloc.allocate(newcap);
    auto dest = newdata;
    auto elem = elements;
    for(size_t i = 0; i != size(); ++i ){
        alloc.construct(dest++,std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcap;
}

void StrVec::free(){
    if(size() != 0){
        /*
        while(p != elements){
            alloc.destroy(--p) ;
        } 
        */
        std::for_each(elements,first_free,[](std::string &ps){alloc.destroy(&ps);});
        alloc.deallocate(elements,capacity());
    } 
}

StrVec::~StrVec(){free();}

void StrVec::push_back(const std::string &str){
    chk_n_alloc();
    alloc.construct(first_free++, str);
}
#endif //STRVEC_HPP

