#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
    
    vector<int> ivec;
    int tmp,count = 0;
    while(cin>>tmp){
        cout<< "the "<<count+1<<"th number"<<endl; 
        ivec.push_back(tmp);
        count ++;
    }

    if (ivec.size() != 0){
        if (ivec.size() ==1){ cout << "only one number: "<< ivec[0]<<endl;} 
        else{
            decltype(ivec.size()) ind = 0;
            for (ind = 0; ind < ivec.size() -1 ; ind ++ ){
                cout<<"the sum is : " << ivec[ind]+ivec[ind+1]<<endl; 
            }  
        }
    }else{
        cout<<"empty vector"<<endl; 
    }
    cout<<"................................."<<endl;
    if(ivec.size() != 0){
        int inds = 0, inde = ivec.size()-1; 
        for(;inds<=inde;inds++,inde--){
            cout<<"sum is : "<<ivec[inds]+ivec[inde]<<endl; 
        }
    }else{cout<<"empty vector"<<endl;}
    return 0;
}
