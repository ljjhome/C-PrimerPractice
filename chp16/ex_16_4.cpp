#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;
template<typename T,typename V> T myFind(const T& beg, const T& end, const V& value){
	auto it = beg;	
	while(it !=end && *it != value){
		++it;
	}
	return it;
}
int main(){
	vector<string> vs = {"haha","wo","shi","shui"};
	string str("shi");
	auto it = myFind(vs.begin(),vs.end(),str);
	cout<<*it<<endl;
}
