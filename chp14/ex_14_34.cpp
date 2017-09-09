#include <iostream>
#include <string>
using namespace std;
class IFELSE{
public:
    string operator()(double che, const string & s1, const string & s2){
        if(che > 10){
            return s1; 
        }else{
            return s2;
        } 
    }
};
int main(){
    IFELSE i1;
    cout << i1(10.1,"haha","houhou")<<endl;;
    
}
