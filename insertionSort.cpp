#include <iostream>
using namespace std;


void insertionSort(int arr[],int n){

	for(int j = 1; j < n; j++){
		int key = arr[j];

		int i = j-1;

		while(i >= 0 && arr[i] > key){
			arr[i+1] = arr[i];
			i--;
		}

		arr[i+1] = key;

	}

}


int main(){
	int arr[] = {5,1,3,2,4};

	int n =sizeof(arr)/sizeof(int);

	insertionSort(arr,n);

	for(int i=0; i<n; i++) cout << arr[i] <<" ";

}