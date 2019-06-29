#include <iostream>
using namespace std;

void spiralPrint(int arr[][4],int m,int n){

	int k=0,l=0,i;

	while(k < m && l < n){

		//first row
		for(i=l; i<n; i++)
			cout << arr[k][i] << " ";

		k++;

		//end column
		for(i=k; i<m; i++)
			cout << arr[i][n-1] << " ";

		n--;

		//bottom row
		if(k < m){
			for(i=n-1; i>=l; i--)
				cout << arr[m-1][i] << " ";

			m--;
		}

		if(l < n){
			for(i=m-1; i>=k; i--)
				cout << arr[i][l] << " ";
			l++;
		}

	}

}





int main()
{
	int arr[][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

	spiralPrint(arr,4,4);
  
   return 0;

}