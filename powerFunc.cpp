#include <iostream>
using namespace std;

int powerFunc(int b, int p){
	if(p == 0){
		return 1;
	}

	int ans = b * powerFunc(b,p-1);

	return ans;

}

int main(){

	int b,p;
	cin >> b >> p;

	cout << powerFunc(b,p);

}