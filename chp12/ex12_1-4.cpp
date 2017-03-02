#include <string>
#include <iostream>

using namespace std;

class Person{
public:
	Person(string name, string addr):pname("Jiajun"),paddress("America"){
		pname=name;
		paddress=addr;	
	}
	string GetName(){
		return pname;
	}
	string GetAddress(){
		return paddress;
	}
private:
	string pname;
	string paddress;
};

int main(){

	Person tingting("TingTing","China");
	cout<<tingting.GetName()<<endl;
	cout<<tingting.GetAddress()<<endl;
	return 0;
}	
