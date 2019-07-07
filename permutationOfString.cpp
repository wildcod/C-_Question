#include <iostream>
#include <string.h>
using namespace std;

void permut(char str[], int l, int r){

	if(l == r)
		cout << str << endl;

	else{
		for(int i=l ; i <= r; i++ ){
			swap(str[l],str[i]);
			permut(str,l+1,r);
			swap(str[l],str[i]); //backtrack
		}
	}

}

int main(){
	char str[] = "abc";
	int n = strlen(str);
	permut(str,0,n-1);
}