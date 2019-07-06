#include <iostream>
#include <string.h>
using namespace std;

string reduceStr(const string& str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else if (str[0] == str[1])
    {
        return reduceStr(str.substr(1, (str.length() - 1)));
    }
    else
    {
        return str[0] + reduceStr(str.substr(1, str.length()));
    }
}


int main() {
   
   string str = "helloxxdnnee";

    cout << reduceStr(str);

}
