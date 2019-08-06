#include <iostream>
#include <iterator> 
#include <map> 
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
     int n,d,k;
     cin >> n;
     map<int, int> helper;
     map<int, int>::iterator itr;
     for(int i=0; i<n; i++){
         cin >> d;
        helper.insert(pair<int, bool>(d,i)); 
     }
     cin >> k;
     int i= 0;
     
     for (itr = helper.begin(); itr != helper.end(); ++itr) { 
        if(i == k-1){
           cout << itr->first <<endl;
           break;
        }
        i++;
    } 


    }
}   