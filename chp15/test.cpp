#include <string>
#include <set>
#include <iostream>
using namespace std;
bool comp(const int& a, const int& b){
	return a<b;
}
int main(){
	
	multiset<int, decltype(comp)*> items(comp);
	items.insert(10);
	items.insert(1);
	
	for(auto c : items){
		cout << c<<endl;
	}
}
