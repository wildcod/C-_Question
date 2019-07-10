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
}

void midElement(Node* head){
	Node* slow = head;
	Node* fast = head;

   while(fast->next && fast->next->next){
   		fast = fast->next->next;
   		slow = slow->next;
   }

   cout << slow->data << endl;

}

int main(){

	int n;
	cin >> n;

	Node* head = createList(n);

	midElement(head);
}