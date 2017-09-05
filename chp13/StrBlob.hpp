#ifndef STR_BLOB_HPP
#define STR_BLOB_HPP
#include <string>
#include <vector>

#include <memory>
class StrBlob{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    StrBlob(const StrBlob & sb);
    StrBlob & operator=(const StrBlob &);
    long usecount(){return data.use_count();}
    size_type size() const {return data->size();}


private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

#endif //STR_BLOB_HPP
