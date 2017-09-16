#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string name;
	int year;
	vector<pair<string, int>> vp;
	pair<string, int> p;
	while(cin>>name>>year){
		vp.push_back(make_pair(name, year));
		vp.push_back({name, year});
		p = {name,year};
		vp.push_back(p);
		cout << "the number of element:" << vp.size()<<endl;
			
	}
	return 0;
}
