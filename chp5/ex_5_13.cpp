#include <string>
#include <iostream>
using namespace std;
int main(){
    
    string str;
    string hahastring = "";
    while(getline(cin,str)){
        
        for (auto it = str.cbegin();it!=str.cend();++it){
            switch (*it){
                case 'a':
                    int tmpint ;
                    tmpint = 0;
                    break;
                case 'e':
                    tmpint = 1;
                    cout << "tmpint = :"<<tmpint<<endl;
            } 
        }
    }
}
