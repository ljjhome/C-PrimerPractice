#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// from ex 10.9
class str_comp{
public:
    bool operator()(const string &lhs, const string & rhs){
        return lhs.size() < rhs.size() ;
    }
};
class str_chk{
public:
    str_chk(const size_t num):sz(num){}
    bool operator()(const string &s){
        return s.size()>=sz; 
    }
private:
    size_t sz;
};
void elimdups(std::vector<std::string> &vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(std::vector<std::string> &vs, std::size_t sz)
{
    using std::string;

    elimdups(vs);

    // sort by size, but maintain alphabetical order for same size.
    std::stable_sort(vs.begin(), vs.end(), str_comp());

    // get an iterator to the first one whose size() is >= sz
    auto wc = std::find_if(vs.begin(), vs.end(), str_chk(sz));

    // print the biggies
    std::for_each(wc, vs.end(), [](const string &s){
        std::cout << s << " ";
    });
}

int main()
{ // ex10.16
    std::vector<std::string> v
    {
        "1234","1234","1234","hi~", "alan", "alan", "cp"
    };
    std::cout << "ex10.16: ";
    biggies(v, 3);
    std::cout << std::endl;

    return 0;
}
