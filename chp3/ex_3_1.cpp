#include <iostream>

using std::cout;
using std::endl;
using std::cin;
int main(){
    /* exercise 1.9*/ 
    int i = 50;
    int sum = 0;
    while(i<101){
        sum = sum + i;
        i++;
    }
    cout<<"the sum from 50 to 100 is: "<<sum<<endl;

    /* exercise 1.10*/
    for (int i = 10; i>-1; i--){
        cout<<i<<endl; 
    }

    /* exercise 1.11*/
    int num1,num2;
    cout<<"input two numbers like 10 20: "<<endl;
    cin>>num1>>num2;
    int count = num1;
    while(count<=num2){
        cout<<count<<endl;
        count++;
    }
    return 0;
}
