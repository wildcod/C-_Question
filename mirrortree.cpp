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

void mirror(Node* node) 
{
     // Your Code Here
     if(!node) return;
     if(!node->left && !node->right) return;
     Node* temp;
     temp = node->right;
     node->right = node->left;
     node->left = temp;
     mirror(node->left);
     mirror(node->right);
}


int main()
{
	Node* root = NULL;

	root = createBT();

	mirror(root);

	inorder(root);
}