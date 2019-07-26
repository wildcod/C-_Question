#include <iostream>
#include <queue>
using namespace std;

class Node {
	public :
	int data;
	Node* left;
	Node* right;
	Node(int d){
		data = d;
		left = right = NULL;
	}
};

Node* createBT(){
	int d;
	cin >> d;

	if(d == -1){
		return NULL;
	}

	Node* root = new Node(d);
	root->left = createBT();
	root->right = createBT();

	return root;
}

void preorder(Node* root){
	if(root){
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}



void inorder(Node* root){
	if(root){
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

void postorder(Node* root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
	}
}

void levelOrder(Node* root){
	queue <Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* d = q.front();
		cout << d->data << " ";
		if(d->left) q.push(d->left);
		if(d->right) q.push(d->right);
		q.pop();
	}

}

int sumOfNOdes(Node* root){
	queue <Node*> q;
	int sum = 0;
	q.push(root);
	while(!q.empty()){
		Node* d = q.front();
		sum += d->data;
		if(d->left) q.push(d->left);
		if(d->right) q.push(d->right);
		q.pop();
	}
	return sum;
}


int main()
{
	Node* root = NULL;

	root = createBT();

	cout << sumOfNOdes(root);
}