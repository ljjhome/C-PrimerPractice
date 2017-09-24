#include <iostream>
#include "Sales_data.hpp"
using namespace std;
template<typename T> int compare(const T& a, const T& b){
	if(a<b) return -1;
	else if(a>b) return 1;
	else return 0;
}
int main(){
	double a = 1, b =2;
	cout << compare(a,b)<<endl;
	/*
	Sales_data s1,s2;
	cout << compare(s1,s2)<<endl;
	*/
	return 0;
}
