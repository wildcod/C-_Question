#include <iostream>
#include <iterator> 
#include <vector>
using namespace std;

int main()
{

  
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int helper[1000] = {0};

    for(int i=0; i < n; i++){
        helper[arr[i]]++; 
    }
   
    int dist,result = -1000000;
    for(int i=0; i < n; i++){
         int max = -1000000000;
         int min = 1000000000;
        if(helper[i] > 1){
            for(int j = 0; j < n ; j++){
                if(arr[j] == i){
                   min = min > j ? j : min;
                   max = max < j ? j : max;
                }
            }
            dist = max - min;
            cout << min << " " << max << endl;
            if(dist > result){
                result = dist;
            }
        }
    }
    cout << result << endl;
}
