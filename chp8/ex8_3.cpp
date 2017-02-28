#include<iostream>
#include <string>
#include <ostream>
#include <istream>
using namespace std;

istream& jjp(istream& is){
	string ival;

	while(is>>ival, !is.eof()){
		if (is.bad())
			throw runtime_error("IO stream corrupted");
		if (is.fail()){
			cerr<<"bad data, try again";
			is.clear();
			is.ignore(10,' ');
			continue;
		}
		cout<<ival<<"d";
		cout<<"haha"<<endl;
	}
	is.clear();
	return is;
}

int main(){
	double dval;
	jjp(cin);
	cin>>dval;
	cout<<dval<<endl;
	return 0;
}


