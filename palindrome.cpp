#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int flag = 0;
	char arr[] = "12321";
	int len = strlen(arr);

	for(int i=0,j=len-1; i != j; i++,j--){
		if(arr[i] != arr[j]){
			flag = 1;
			break;
		}
	}
	if(flag) cout << "Not palindrome";
	else cout << "yes it is palindrome";
 }