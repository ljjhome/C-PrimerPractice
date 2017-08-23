#include <vector>
#include <string>
#include <iostream>
using namespace std;

int myAdd(int a,int b){
    cout <<"the sum is : "<<a+b<<endl;
    return a+b;
}
int myMinus(int a, int b){
    cout <<"The diff is : "<<a-b<<endl;
    return a-b;
}
int myMult(int a, int b){
    cout <<"The mult is : "<<a*b<<endl;
    return a*b;
}
int myDiv(int a, int b){
    cout <<"the div is : "<<a/b<<endl;
    return a/b;
}

int main(){
    
    typedef int (*pf)(int,int);
    vector<pf> vfunc;
    //vector<int (*)(int, int)> vfunc;
    vfunc.push_back(myAdd);
    vfunc.push_back(myMinus);
    vfunc.push_back(myMult);
    vfunc.push_back(myDiv);

    int a = 21, b = 10;;
    int c = 0;
    for(auto it = vfunc.cbegin();it!=vfunc.cend();it++){
        c = (*it)(a,b) ;
    }
}
