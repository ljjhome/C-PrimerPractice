#include <iostream>
#include <string>

using namespace std;

template<typename T, size_t N> ostream& my_print(ostream& os, const T (&a)[N]){
	for(auto i:a){
		cout << i << " ";
	}	
	return os;
}
int main(){

	int a[] = {1,2,3,4};
	int b[] = {1,2};
	char c[] = "haha";
	char d[] = "heihei";
	my_print(cout,a)<<endl;
	my_print(cout,b)<<endl;
	my_print(cout,c)<<endl;
	my_print(cout,d)<<endl;
	
}
