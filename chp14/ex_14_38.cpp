#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class chklen{
public:
    chklen(const size_t num):str_len(num){}
    bool operator()(const string &s){
        if(s.size() == str_len)
            return true;
        else 
            return false;
    }
private:
    size_t str_len;
};
int main(){
    
    vector<string> sv = {"h","haha","ha","hah","hahah","wo","wocao","nim","nimei"};
    for (size_t i = 1; i<3;++i){
        size_t num = count_if(sv.begin(),sv.end(),chklen(i)); 
        cout << "length : "<<i<<" has "<< num<<" words"<<endl;
    }

    size_t sum = 0;
    for (size_t i = 1; i <=3;++i){
        sum+=count_if(sv.begin(),sv.end(),chklen(i)); 
    }
    cout << sum << " and " << sv.size() - sum << " words separatly"<<endl;
}
