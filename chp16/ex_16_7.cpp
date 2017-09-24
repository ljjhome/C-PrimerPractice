#include <iostream>
using namespace std;
template<typename T, size_t N> constexpr size_t my_size(const T (&)[N]){
	return N;
}
int main(){
	int a[] = {1,2,3,4,6,7};
	cout << my_size(a)<<endl;
}
