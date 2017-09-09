#ifndef STR_BLOB_HPP
#define STR_BLOB_HPP
#include <string>
#include <vector>
#include <iostream>
#include <memory>
class StrBlob{
public:
    friend bool operator==(const StrBlob & s1, const StrBlob & s2);
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    StrBlob(const StrBlob & sb);
    StrBlob & operator=(const StrBlob &);
    long usecount(){return data.use_count();}
    size_type size() const {return data->size();}

    void p1(const std::string& s);
    void p1(std::string &&s);

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};


/*
void StrBlob::push_back2(std::string &&s){
    data->push_back(std::move(s));
    std::cout << "push_back(std::string &&s)"<<std::endl;
}
*/

#endif //STR_BLOB_HPP
