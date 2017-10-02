#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
int count_m(const vector<T> &v, const T &t){
	cout << "type 1"<<endl;
	return count(v.begin(), v.end(), t);	
}
template <>
int count_m(const vector<const char*> &ccv, const char* const &t){
	cout << "type 2"<<endl;

	return count(ccv.begin(), ccv.end(), t);	
}

int main(){
	vector<double> dv = {1.2,2.3,1.2,5.3,1.2,6.5};
	vector<int> iv = {1,2,3,4,2,3,2,4,5,6};
	vector<string> sv{"haha","nimei","haha","shenme","haha"};

	vector<const char *> ccv = {"hah","ni","hah","mei","hah"};
	const char* a = "hah";
	cout<< count_m(dv,1.2)<<endl;
	cout<< count_m(iv,2)<<endl;
	cout<< count_m(sv,string("haha"))<<endl;
	cout<< count_m(ccv,a)<<endl;
	return 0;
}
