#include <iostream>
using namespace std;
int main() {
  
  	char arr[100],result[20];
  	cin >> arr;
   
    int N=0,S=0,E=0,W=0;

    for(int i=0; arr[i] != '\0'; i++){
    	switch(arr[i]){
    		case 'N' : N++; break;
    		case 'E' : E++; break;
    		case 'S' : S++; break;
    		case 'W' : W++; break;
    		default : break;
    	}
    }
    int k = 0;
    if(N - S > 0){
    	for(;k < N-S;k++) result[k] = 'N';
    }else{
    	for(;k < S-N;k++) result[k] = 'S';
    }
    int j = 0;
	if(W - E > 0){
    	for(;j < W-E;j++) result[k++] = 'W';
    }else{
    	for(;j < E-W;j++) result[k++] = 'E';
    }
	result[k] = '\0';
	cout << result;
}