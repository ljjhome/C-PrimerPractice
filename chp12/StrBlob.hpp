#ifndef STRBLOB_HPP
#define STRBLOB_HPP
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
class StrBlob {
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
#endif //STRBLOB_HPP
