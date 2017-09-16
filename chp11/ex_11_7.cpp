#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main(){
	map<string, vector<pair<string, int>>> family_map;
	family_map.insert({"li",{{"jiajun",12},{"haha",32}}});
	family_map["li"].push_back({"woqu",31});
	for(auto name: family_map["li"]){
		cout << name.first<< endl;
	}
	return 0;
}
