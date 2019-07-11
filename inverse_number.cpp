#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int num,ans = 0;
    cin >> num;
    int i = 0;
    while(num){
        i++;
        int r = num % 10;
        ans = ans + i * pow(10.0,r-1);
        num = num/10;
    }

    cout << ans;

}
