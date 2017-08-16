#include <iostream>
using namespace std;
void ref_swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void point_swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void wrong_swap(int *a, int *b){
    int *tmp = a;
    a = b;
    b = tmp;
}
int main(){
    
    int a,b;
    cout<<"input two numbers: "<<endl;
    while(cin>>a>>b){
        wrong_swap(&a,&b);
        cout << "a:"<<a<<" b:"<<b<<endl;
        cout<<"input two numbers: "<<endl;
    }
    return 0;
}
