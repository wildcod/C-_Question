#include <iostream>
using namespace std;

 int maxSum = 0;
 int memo[1000] = {0};
int maxSumNum(int n){

	if(n == 0 || n == 1){
		return n;
	}
	// if(memo[n] > 0){
	// 	return memo[n];
	// }

	int left = maxSumNum(n/2);
	int mid = maxSumNum(n/3);
	int right = maxSumNum(n/4);

	int res = left + mid + right;

	maxSum = max(res,n);
	// memo[n] = maxSum;

	return maxSum;

}


int main()
{
	int n = 100;

	 cout << maxSumNum(n);
}