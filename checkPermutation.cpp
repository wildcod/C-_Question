#include <iostream>
using namespace std;
int main() {
    char arr1[] = "abc";
    char arr2[] = "ebc";

    int sum1 = 0, sum2 = 0;
    for(int i=0; arr1[i] != '\0'; i++) sum1 += arr1[i];
     for(int j=0; arr2[j] != '\0'; j++) sum2 += arr2[j];

   sum1 == sum2 ? cout << "yes" : cout << "No";

}
