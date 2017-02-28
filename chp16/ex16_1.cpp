#include <string>
#include <iostream>

using namespace std;
template <typename T>
T jjabs(T a){
	if(a>=0){
		return a;
	}
	else{
		return -a;
	}
}

int main(){
	int t1 = 10;
	float t2 = -1.3;
	double t3 = -19.34;

	cout<<"abs(t1)="<<jjabs(t1)<<endl;
	cout<<"abs(t2)="<<jjabs(t2)<<endl;
	cout<<"abs(t3)="<<jjabs(t3)<<endl;
	return 0;
}

