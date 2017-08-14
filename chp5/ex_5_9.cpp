#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str;
    unsigned int vowal = 0, n_count = 0, space_count = 0, t_count = 0;
    while(getline(cin, str)){
        cout << "exercise 5.9"<<endl; 
        vowal  = 0;
        space_count = 0;
        t_count = 0;
        n_count = 0;
        for (auto it = str.cbegin();it!=str.cend();++it){
            if(*it =='a'||*it == 'e'||*it == 'i'|| *it =='o'||*it == 'u'){
                ++vowal;
                 
            } 
            if(*it == ' ') ++space_count;
            if(*it == '\t') ++t_count;
            if(*it == '\n') ++n_count;
        } 

        cout << "the vowal number is : "<<vowal<<endl;
        cout << "the number of space :"<<space_count<<endl;
        cout <<"the nubmer of new line:"<<n_count<<endl;
        cout <<"then number of table: "<<t_count<<endl;
        cout << "exercise 5.10" <<endl;
        vowal = 0;
        space_count = 0;
        t_count = 0;
        n_count = 0;
        unsigned int double_count = 0;
        for (auto it = str.cbegin();it!=str.cend();++it){
                 
            switch (*it){
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    ++vowal;
                    break;
                case ' ':
                    ++space_count;
                    break;
                case '\t':
                    ++t_count;
                    break;
                case '\n':
                    ++n_count;
                    break;
                case 'f':
                    if((it+1)!=str.cend()){
                        switch (*(it+1)){
                            case 'f': case 'i': case 'l':
                                ++double_count;
                                break;
                            default:
                                break;
                        } 
                    }
                    break;
                default:
                    break;
            }
        } 
        cout << "the vowal number is : "<<vowal<<endl;
        cout << "the number of space :"<<space_count<<endl;
        cout <<"the nubmer of new line:"<<n_count<<endl;
        cout <<"then number of table: "<<t_count<<endl;
        cout <<"double count number : " << double_count<<endl;


    }
    return 0;
}
