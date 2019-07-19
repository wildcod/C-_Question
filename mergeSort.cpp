#include <iostream>
using namespace std;


void merge(int arr[],int be,int mid,int en){
	int n1 = mid - be +1;
	int n2 = en - mid;
	int left[n1+1];
	int right[n2+1];

	

	for(int i=1; i <= n1 ; i++){
		left[i] = arr[be+i-1];
	}
	for(int j=1; j <= n2; j++){
		right[j] = arr[mid+j];
	}

	left[n1+1] = 1000000000;
   right[n2+1] = 1000000000;

	int i=1,j=1;

	for(int k=be; k <= en; k++){
		if(left[i] <= right[j]){
			arr[k] = left[i++];
		}
		else arr[k] = right[j++];
	}

}


void mergeSort(int arr[], int be, int en){

	if(be < en){
	
	int mid = (be+en)/2;

	mergeSort(arr,be,mid);
	mergeSort(arr,mid+1,en);
	merge(arr,be,mid,en);
  }

}


int main(){

	int arr[] = {5,4,3,2,1};

	int n = sizeof(arr)/sizeof(int);

	mergeSort(arr,1,n);

	for(int i=0; i < n; i++) cout << arr[i] << " ";

}