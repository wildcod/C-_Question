#include <iostream>
#include <stack>
using namespace std;

void printCards(int primes[],int n,int q,stack<int> stack1)
{
    stack<int>  stack2, stack3;
    for(int i = 0 ; i < q; i++)
    {
        if(stack1.empty())
            break;
       // ith prime number from the prime array
        int cur = primes[i];
        while(!stack1.empty())
        {
            int ele = stack1.top();
            stack1.pop();
            if(ele%cur == 0)
            {
                stack2.push(ele);
            }
            else
            {
                stack3.push(ele);
            }
        }
        while(!stack2.empty())
        {
            cout<<stack2.top()<<endl;
            stack2.pop();
        }
        stack1 = stack3;
        while(!stack3.empty())
            stack3.pop();
    }
    while(!stack1.empty())
    {
        cout<<stack1.top()<<endl;
        stack1.pop();
    }
}

int main(){


   int n,q,d;

   stack<int> S;
   cin >> n >> q;

   for(int i=0; i<n; i++){
      cin >> d;
       S.push(d);
   }
    
   int primes[] = {2,5,7,11,13,17,19};

   printCards(primes,n,q,S);

}