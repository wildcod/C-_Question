#include <iostream>
#include <string.h>
using namespace std;
int main() {
   
   char str[] = "abxxxxexexdexed";
    int len = strlen(str);
    int k =0;

    for(int i=0; i < len-k; i++){
        if(str[i] == 'x'){
            for(int j=i; j < len; j++)
                str[j] = str[j+1];
            str[len-1] = 'x';
            k++;
            i--;
        }
    }
   cout << str;
}
