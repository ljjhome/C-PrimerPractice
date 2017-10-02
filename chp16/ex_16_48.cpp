#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
string debug_rep(const T &t){
	cout << "template string debug_rep(const T& t)"<<endl;
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T* t){
	cout << "template string debug_rep(const T* t)"<<endl;
	ostringstream ret;
	ret<< debug_rep(*t)<<endl;
	return ret.str();
}

template<>
string debug_rep(char *p){
	cout << "template<> char*p"<<endl;
	return debug_rep(string(p));
}
template<>
string debug_rep(const char *p){
	cout << "template<> const char*p"<<endl;
	return debug_rep(string(p));
}

int main() {
	
	string s("haha");
	debug_rep(s);
	debug_rep(&s);
	const char *p = "hahah";
	debug_rep(p);
	return 0;
}
