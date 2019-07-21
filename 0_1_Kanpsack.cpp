#include <iostream>
using namespace std;


//without DP
int kanpsack(int p[],int w[],int n,int c){
	if(n == -1 || c == 0 ){
		return 0;
	}
	if(w[n] > c){
		return kanpsack(p,w,n-1,c);
	}


	return max( (p[n] + kanpsack(p,w,n-1,c-w[n])), kanpsack(p,w,n-1,c));
}

//with DP
int memo[3][3];

int kanpsackDP(int p[],int w[],int n,int c){
	if(n == -1 || c == 0 ){
		return 0;
	}
	if(w[n] > c){
		return kanpsack(p,w,n-1,c);
	}
    if(memo[n][c] != 0) return memo[n][c];

    int include = p[n] + kanpsack(p,w,n-1,c-w[n]);
    int exclude = kanpsack(p,w,n-1,c);

    if(include > exclude){
    	memo[n][c] = include;
    	return include;
    }
    else{
    	memo[n][c] = exclude;
    	return exclude;
    }

}


int main(){
	int p[] = {10,12,28};
	int w[] = {1,2,4};
	int n = sizeof(p)/sizeof(int);
	int c = 6; 

	cout << kanpsackDP(p,w,n-1,c) << endl;


}