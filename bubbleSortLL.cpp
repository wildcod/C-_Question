#include <iostream>
using namespace std;

class Node {
 public:
	int data;
	Node* next;
	Node(int d){
		data = d;
		next = NULL;
	}
};

Node* head = NULL;

Node* createNode(Node* head,int data){

 Node* temp = new Node(data);

 if(!head) return temp;

 temp->next = head;

 return temp;

}

Node* createList(int n){
	int d;
	Node* head = NULL;
	while(n--){
		cin >> d;
		head = createNode(head,d);
	}
	return head;
}

void printList(Node* head){
	Node* cur = head;
	while(cur){
		cout << cur->data << "-->";
		cur = cur->next;
	}
	cout << endl;
}

int lengthLL(Node* head){
	Node* cur = head;
	int count = 0;
	while(cur){
		count++;
		cur = cur->next;
	}
	return count;
}

Node* bubbleSort(Node* head){

	int len = lengthLL(head);

	for(int i = 0; i < len; i++){

		Node* cur = head;
		Node* prev = NULL;

		while(cur && cur->next){
			Node* ahead = cur->next;

		if(cur->data > ahead->data)
		  {	
			if(!prev){
				cur->next = ahead->next;
				ahead->next = cur;
				head = ahead;
				prev = ahead;
				ahead = cur->next;
			}
			else{
				prev->next = ahead;
				cur->next = ahead->next;
				ahead->next = cur;
				prev = ahead;
				ahead = cur->next;
			}
		 }
		 else{
		 	prev = cur;
		 	cur = ahead;
		 	ahead = cur->next;
		 }

		}

	}
	return head;
}



int main(){

	int n;
	cin >> n;

	 head = createList(n);

	head = bubbleSort(head);

	 printList(head);
}