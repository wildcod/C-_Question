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

void reverse(Node* prev, Node* cur){

	if(cur){
		reverse(cur,cur->next);
		cur->next = prev;
	}
	else head = prev;

}


int main(){

	int n;
	cin >> n;

	 head = createList(n);

	printList(head);

    reverse(NULL,head);

	printList(head);
}