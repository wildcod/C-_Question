#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char arr[] = "abcdef";
    int n;
    cin >> n;
    int len = strlen(arr);

    for(int i=0,j=len-n; arr[j] != '\0'; i++,j++){
        char c = arr[j];
        for(int k=j; k > i; k--){
            arr[k] = arr[k-1];
        }
        arr[i] = c;
    }
    cout << arr;
}
