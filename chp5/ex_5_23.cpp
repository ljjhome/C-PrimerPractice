#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;
int main(){
    
    int ival1, ival2;
    while(cin>>ival1>>ival2){
        try{ 
            if(ival2 == 0){
                throw runtime_error("divided by 0!!"); 
            } 
            cout << "the result is : "<<ival1/ival2<<endl; 
        }catch(runtime_error err){
            cout << err.what()<<endl;
            cout <<"want to try again? enter y/n:"<<endl;
            char c;
            cin>>c;
            if (c=='n'){ break;}
        }
    }
    return 0;
}
