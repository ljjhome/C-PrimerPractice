#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using namespace std::placeholders;
bool check_size(const string& s, const string::size_type sz){
    return s.size()<sz;
}
void elimDups(vector<string> &words){
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
void biggies(vector<string> &words, string::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string& a, const string& b){return a.size()<b.size();});
    auto wc = find_if(words.begin(),words.end(),[sz](const string& a){return a.size()>=sz;});
    for_each(wc,words.end(),[](const string &a){cout<<a<<endl;});
}

void biggies2(vector<string> &words, string::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string& a, const string& b){return a.size()<b.size();});
    auto wc = partition(words.begin(),words.end(),bind(check_size,_1,sz));
    for_each(wc,words.end(),[](const string &a){cout<<a<<endl;});
}
void biggies3(vector<string> &words, string::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string& a, const string& b){return a.size()<b.size();});
    auto wc = stable_partition(words.begin(),words.end(),bind(check_size,_1,sz));
    for_each(wc,words.end(),[](const string &a){cout<<a<<endl;});
}
int main(){

    vector<string> svec{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    cout<<"..........."<<endl;
    biggies(svec,3);
    cout<<"..........."<<endl;
    vector<string> svec2{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    biggies2(svec2,3);
    cout<<"..........."<<endl;
    vector<string> svec3{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    biggies3(svec3,3);
    return 0; 
}
