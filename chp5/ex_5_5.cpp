#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main(){
    vector<string> scores{"F","D","C","B","A","A++"};
    
    int grade;
    string finals;
    while(cin>>grade){
        if(grade<60){
            cout<<scores[0]<<endl; 
        }else{
            cout<<scores[(grade-50)/10]<<endl; 
        } 

        finals = (grade<60)?scores[0]:
            (grade<70)?scores[1]:
            (grade<80)?scores[2]:
            (grade<90)?scores[3]:
            (grade<100)?scores[4]:scores[5];
        cout << finals<<endl;

    }
    return 0;
}
