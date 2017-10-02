#include <iostream>
using namespace std;

template <typename T, typename... Args>
void foo(const T& t, const Args& ... rest){
	cout << sizeof...(Args)<<endl;
	cout << sizeof...(rest)<<endl;
}

int main(){
		
	int i = 0; double d = 3.15; string s = "haha woqu ";
	foo(i,s,43,d);
	foo(s,32,"hi");
	foo(d,s);
	foo("haha");
	return 0;
}
