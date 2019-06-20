#include <iostream>
using namespace std;
int main() {
  int n,m,l;
  cin >> n;
  m = l = n/2;
  for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
          if(i <= n/2){
              if(j <= m || j >= l) cout << "*";
              else cout << " ";
          }
          else{
              if(j <= m || j >= l) cout << "*";
              else cout << " ";
          }
          cout << "\t";
      }
      if(i < n/2){
          m = m-1;
          l = l+1;
      }
      else{
          m = m+1;
          l = l-1;
      }
      cout << endl;
  }
}
