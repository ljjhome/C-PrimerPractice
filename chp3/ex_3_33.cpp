#include <iostream>

using namespace std;
int main(){
    
    unsigned int scores[11];
    unsigned int grade;
    while(cin>>grade){
        ++scores[grade/10]; 
    }
    for (size_t id = 0; id<11;id++){
        cout << scores[id]<<endl; 
    }
    return 0;
}
