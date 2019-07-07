#include <iostream>
#include <string.h>
using namespace std;

int count(string str, int n){

    if(n < 0){
        return 0;
    }
    if(n >= 2){
        if(str[n] == 'a' && str[n-1] == 'a' && str[n-2] == 'a'){
            return 1 + count(str,n-1);
        }
        else return count(str,n-1);
    }
}


int main() {

    string str = "aaaaaaaaaaa";
    int n = str.length();
    cout << count(str,n-1);
    
}

