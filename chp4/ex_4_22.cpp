#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    
    unsigned int grade;
    string final_grade;
    string final_grade2;
    while(cin>>grade){
        final_grade = (grade>90)?"high pass":
            (grade>75)?"pass":
            (grade>60)?"low pass":"fail";
        cout <<final_grade<<endl;

        if (grade>90){final_grade2 = "high pass";}
        else{
            final_grade2 = (grade>75)?"pass":
                (grade>60)?"low pass":"fail";
        }
        cout << final_grade2 <<endl;
    }
    return 0;

}
