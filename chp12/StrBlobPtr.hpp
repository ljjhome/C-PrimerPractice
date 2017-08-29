#ifndef STRBLOBPTR_HPP
#define STRBLOBPTR_HPP
#include <vector>
#include <string>
#include <memory>

//#include "StrBlob.hpp"
class StrBlobPtr;
class ConstStrBlobPtr;
class StrBlob {
    friend class StrBlobPtr; 
    friend class ConstStrBlobPtr; 
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob() ;
    StrBlob(std::initializer_list<std::string> il);
    std::string& front(){check(0,"front on empty StrBlob"); return data->front();}
    std::string& back(){check(0,"back on empty StrBlob"); return data->back();}
    const std::string& front() const {check(0,"front on empty StrBlob"); return data->front();}
    const std::string& back() const {check(0,"back on empty StrBlob"); return data->back();}
    void push_back(const std::string& str){
        data->push_back(str); 
    }
    void pop_back(){
        check(0,"pop from empty vector");
        data->pop_back();
    }
    StrBlobPtr begin();
    StrBlobPtr end();
    ConstStrBlobPtr end() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const{
        if(i>=data->size()){
            throw std::out_of_range(msg); 
        } 
    };
};

StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}
class StrBlobPtr{
public:
    StrBlobPtr():curr(0){};
    StrBlobPtr(StrBlob &a, std::size_t sz = 0):wptr(a.data),curr(sz){}
    std::string &deref() const;
    StrBlobPtr &incr();
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t i,const std::string& msg) const {
        auto ret = wptr.lock();
        if(!ret){
            throw std::runtime_error("unbound StrBlobPtr");
        }
        if(i >= ret->size())
            throw std::out_of_range(msg);
        return ret;
     
    }
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

class ConstStrBlobPtr {
    
public:
    ConstStrBlobPtr():curr(0){};
    ConstStrBlobPtr(const StrBlob &a, std::size_t sz = 0):wptr(a.data),curr(sz){}
    const std::string &deref() const;
    ConstStrBlobPtr &incr();
private:
    std::shared_ptr<const std::vector<std::string>> check(std::size_t i,const std::string& msg) const {
        auto ret = wptr.lock();
        if(!ret){
            throw std::runtime_error("unbound StrBlobPtr");
        }
        if(i >= ret->size())
            throw std::out_of_range(msg);
        return ret;
     
    }
    std::weak_ptr<const std::vector<std::string>> wptr;
    std::size_t curr;
};

StrBlobPtr StrBlob::begin(){
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end(){
    return StrBlobPtr(*this, data->size() -1);
}
ConstStrBlobPtr StrBlob::end() const {
    return ConstStrBlobPtr(*this, data->size() -1);
}
std::string & StrBlobPtr::deref() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
StrBlobPtr& StrBlobPtr::incr(){
    check(curr, "incresemetn past end of StrBlobPtr");
    ++curr;
    return *this;
}
const std::string & ConstStrBlobPtr::deref() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
ConstStrBlobPtr& ConstStrBlobPtr::incr(){
    check(curr, "incresemetn past end of StrBlobPtr");
    ++curr;
    return *this;
}
#endif //STRBLOBPTR_HPP
