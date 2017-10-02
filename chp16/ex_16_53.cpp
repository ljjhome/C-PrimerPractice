#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
string debug_rep(const T &t){
	cout << "string debug_rep(const T& t)"<<endl;
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T* t){
	cout << "string debug_rep(const T* t)"<<endl;
	ostringstream ret;
	ret<< debug_rep(*t)<<endl;
	return ret.str();
}

template <typename T>
ostream& print(ostream& os, const T& t){
	os << t<<endl;;
	return os;
}
template <typename T, typename... Args>
ostream & print(ostream &os, const T& t, Args&... rest){
	os << t << ",";
	print(os, rest...);
	return os;
}


template <typename... Args>
ostream& errorMsg(ostream &os, const Args& ... rest){
	return print(os, debug_rep(rest)...);
}

class Ha{
public:
	string s = "haha";
};
int main(){
	
	Ha h;
	int i = 12;
	print(cout,"1");
	print(cout,"ahha","12");
	print(cout,"haha","ad",i,"adf","sf","asdfsfff");
	return 0;
}
