#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

template <typename _os, typename _dt>
void print_m(_os &ostr, _dt data){
	ostr<<data<<endl;
	cout<<"haha"<<endl;
}

int main(){
	

	ofstream jjofstream("result.dat");

	string st1 = " string type",desstr;
	int st2 = 10;

	ostringstream jjsstream(desstr);
	print_m(cout,st1);
	print_m(jjofstream, st2);
	print_m(jjsstream, st1);

	return 0;
}

