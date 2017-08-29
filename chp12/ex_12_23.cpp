#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
    
    char sc1[] = "haha";
    char sc2[] = "ni hao";
    char sc3[30];
    strcat(sc3,sc1);
    strcat(sc3,sc2);

    cout << sc3<<endl;

    char *p = new char[100];
    p = sc3;
    cout << p<<endl;

    string str1(sc1);
    string str2(sc2);
    string str3 = str1 + str2;
    cout << str3<<endl;
}
