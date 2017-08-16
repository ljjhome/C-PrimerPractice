#include <iostream>
using namespace std;
int fact(int val){
    
    int result = 1;
    for (int i = 1;i<val;i++){
        result*=(i+1);
    }
    static int numcount = 0;
    ++numcount;
    cout<<"call the function : "<<numcount<<" times"<<endl;
    return result;
}
int main(){
    
    int tmp, result;
    while(cin>>tmp){
         
        result = fact(tmp);
        cout << "the factoal is : "<<result<<endl;
    }

    return 0;
}
