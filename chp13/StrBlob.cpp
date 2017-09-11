#include "StrBlob.hpp"

bool operator==(const StrBlob & s1, const StrBlob & s2){
    return *s1.data == *s2.data;
}
void StrBlob::check(size_type i, const std::string& msg) const{
    if(i >= data->size())
        throw std::out_of_range(msg);
}

StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>()){}

StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}

/* Wrong: only add use-count, what we want is another separated object.*/
StrBlob::StrBlob(const StrBlob &sb):data(sb.data){}

//StrBlob::StrBlob(const StrBlob &sb):data(std::make_shared<std::vector<std::string>>(*sb.data)){}

StrBlob & StrBlob::operator=(const StrBlob&sb){
    data = std::make_shared<std::vector<std::string>>(*sb.data);
    return *this;
}
    void StrBlob::p1(std::string &&s){
     
    data->push_back(std::move(s));
    std::cout << "push_back(std::string &&s)"<<std::endl;
    }
    void StrBlob::p1(const std::string& s){
     
    data->push_back(s);
    std::cout << "push_back(const std::string &s)"<<std::endl;
    }
