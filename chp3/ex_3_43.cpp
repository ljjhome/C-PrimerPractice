#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    /* version 1*/
    for (int (&row)[4] : ia){
        for (auto col : row){
            cout << col <<endl; 
        } 
    }
    /* version 2*/
    cout << " .........................."<<endl;
    for (size_t row = 0; row < 3; row++){
        for (size_t col = 0; col < 4; col++){
            cout << ia[row][col]<<endl; 
        } 
    }
    /*version 3*/
    cout << " ..............................."<<endl;
    for (int (*prow)[4] = ia;prow < ia+3;prow++){
        for (int *pcol = *prow; pcol< *prow + 4; pcol++){
            cout << *pcol<<endl; 
        } 
    }
    cout << "........................"<<endl;
    /* exercise 3.44 */
    typedef int (*intarray)[4];
    for (intarray p = ia; p!=ia+3;p++){
        for (int *q = *p; q!=*p + 4; ++q){
            cout << *q << endl;
        } 
    }
    cout <<".........................."<<endl;
    typedef int intarray2[4];
    for (intarray2 *p = ia; p!=ia+3;p++){
        for (int *q = *p; q!=*p + 4; ++q){
            cout << *q << endl;
        } 
    }
    cout <<".........................."<<endl;
    for (auto p = ia;p!=ia+3;p++){
        for ( auto q = *p; q!=*p + 4; ++q){
            cout << *q << endl;
        } 
    }
    return 0;
}
