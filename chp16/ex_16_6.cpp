#include <iostream>
using namespace std;
template<typename T, size_t N> T* my_begin(const T (&a)[N]){
	return const_cast<T*>(&a[0]);
}
template<typename T, size_t N> T* my_end(const T (&a)[N]){
	return const_cast<T*>(&a[N-1]);
}

int main(){
	
	int a[] = {1,2,3,4,5,6};
	cout << *my_begin(a)<<endl;
	cout << *my_end(a)<<endl;
}
