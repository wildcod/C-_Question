#include <iostream>
using namespace std;

class Stack{
  
  int top;
  int size;
  int* arr;
public :
  Stack(int n){
  	 top = -1;
  	 size = n;
  	 arr = new int[n];
  }

  bool empty(){
  	if(top == -1) return true;
  	return false;
  }

  int sizeOfStack(){
  	return top+1;
  }

  void push(int d){
  	if(top == size){
  		cout << "Stack is Overflow";
  		return;
  	}
  	arr[++top] = d;
  }

  int pop(){
  	if(top == -1) return -1;
  	top--; 
  }
  
  int getTop(){
  	  return arr[top];
  }


};


int main(){

  Stack S(5);
  S.push(3);
  S.pop();
  cout << S.getTop() << endl;
  cout << S.sizeOfStack() << endl;
  cout << S.empty() << endl;



}