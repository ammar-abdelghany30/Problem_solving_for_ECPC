#include<iostream>
using namespace std;
int main(){
	
	int steps,m,min_steps;
	cin>>steps>>m;
	const int max_steps=steps;
	if (steps%2==0) {
		 min_steps =steps/2;
	}
	else {
		 min_steps =(steps/2)+1;
	}


	for (int i = min_steps;i<=max_steps;i++) {
		if (i%m==0) {
			cout<<i<<endl;
			return 0;
		}

	}

	cout<<-1<<endl;
	return 0;

}
