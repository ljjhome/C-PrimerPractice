#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using namespace std::placeholders;
bool isShorter(const string & str, const size_t n){
    return str.size()<n;
}
int main(){
    
    vector<string> svec{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    size_t num = 4;
    int countn;
    countn = count_if(svec.begin(),svec.end(),[num](const string& str){return str.size()>num;});
    cout << "the number is : "<< countn<<endl;
    countn = count_if(svec.begin(),svec.end(),bind(isShorter,_1,num));
    cout << "the number is : "<< countn<<endl;
    return 0;
}
