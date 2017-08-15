#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    /* note that this may not be rewritten by for loop, because 
     * we don't know the exact number of the elements in the vector.
     */
    vector<int> ivec;
    int element;
    while(cin>>element){
        ivec.push_back(element); 
    }
    cout<<"The size of the vector is : "<<ivec.size()<<endl;
    return 0;
}
