#include <iostream>
#include <string.h>
using namespace std;

int sumOfDigit( string str,int n){

    if(n == 0){
        return str[0] - '0';
    }

    int smallOutput = sumOfDigit(str,n-1);

    return (str[n] - '0') + smallOutput;

}


int main() {

    string str = "12345";
    int n = str.length();
    cout << sumOfDigit(str,n-1);
    
}

