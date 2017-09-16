#include <vector>
#include <set>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string word;	
	//set<string> exclude = {"an","a","the"};
	vector<string> exclude = {"an","a","the"};
	map<string, size_t> m;
	while(cin>>word && word != "q"){
		for(auto it = word.begin(); it != word.end(); ++it){
			*it = tolower(*it);
		}
		if(ispunct(word.back())) word.erase(word.size()-1);
		if(find(exclude.begin(),exclude.end(),word) == exclude.end()){
			++m[word];	
		}	
	}
	for(auto & w: m){
		cout<<"word : "<<w.first << " occurs " << w.second<<" times"<<endl; 
	}
	return 0;
}
