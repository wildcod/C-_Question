#include <iostream>
using namespace std;

//circular queue

class Queue{

	int front;
	int rear;
	int size;
	int* arr;
public:
	Queue(int n){
		size = n;
		front = rear = 0;
		arr = new int[size];
	}

	void enqueue(int d){
		rear = (rear+1) % size;
		if(rear == front){
			cout << "overflow" << endl;
			if(rear == 0) rear = size -1;
			else rear = rear - 1;
		}
		else{
			arr[rear] = d;
		}
	}

	void dequeue(){
		if(front == rear){
			cout << "underflow";
		}
		else{
			front = (front+1) % size; 
		}
	}

	int getFront(){
		return arr[front+1];
	}

	int sizeOfQueue(){
		return size;
	}


};

int main(){
	Queue Q(5);
	Q.enqueue(1);
	Q.enqueue(2);
	Q.enqueue(3);
	Q.enqueue(4);
	cout << Q.getFront() << endl;
	Q.enqueue(5);
}