#include <functional>
#include <iostream>
#include <string>
#include <map>
using namespace std;
int add(int a, int b){
    return a+b;
}
class mul{
public:
    int operator()(int a, int b){
        return a*b; 
    }
};
int main(){
    auto minus = [](int a, int b)->int{
        return a-b; 
    } ;
    auto divide = [](int a, int b)->int {
        return a/b; 
    };
    map<string, function<int (int, int)>> fm;
    fm.insert({"+",add});
    fm.insert({"-",minus});
    fm.insert({"*",mul()});
    fm.insert({"/",divide});

    cout << "5 + 4 = " << fm["+"](5,4)<<endl;

    cout << "10 * 2 = "<<fm["*"](10,2)<<endl;

}
