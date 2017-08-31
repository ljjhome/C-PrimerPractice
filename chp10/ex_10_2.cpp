#include <algorithm>
#include <string>
#include <iostream>

#include <list>
using namespace std;
int main(){
    
    cout << "we will count the string : ha"<<endl;
    const string str = "ha";
    list<string> lstr;
    string tmp;
    int i = 0;
    while(cin>>tmp && i!=10)
    {
        lstr.push_back(tmp); 
        ++i;
    }

    int ncount = count(lstr.begin(),lstr.end(),str);
    cout << "the string \"ha\" appears : "<<ncount<<" times"<<endl;
    return 0;

}
