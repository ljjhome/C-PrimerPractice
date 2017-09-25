#include <vector>
#include <iostream>
#include <list>

using namespace std;
template<typename T> void my_print1(T& vec){
	for (typename T::size_type i = 0; i != vec.size(); ++i){
		cout << vec[i] << endl;	
	}
}
template<typename T> void my_print2(T& vec){
	for(auto it = vec.begin(); it != vec.end();++it){
		cout << *it <<endl;		
	}	
}
template<typename T> void my_print(T& vec){
	typename T::iterator it_b = begin(vec);
	typename T::iterator it_e = end(vec);
	for( ;it_b != it_e;++it_b){
		cout << *it_b <<endl;		
	}	
}
int main(){
	vector<int> avec = {1,23,3,5,3};
	my_print(avec);

	list<string> slist = {"haha","shi","sb"};
	my_print(slist);
	return 0;
}
