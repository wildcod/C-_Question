#include <iostream>
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

int checkBT(Node* root){
	if(!root) return 1;
	else if(!root->left && !root->right) return 1;
	else if(root->left && root->right) return (checkBT(root->left) && checkBT(root->right));
	else return 0;
}


int main()
{
	Node* root = NULL;

	root = createBT();

	cout << checkBT(root);
}