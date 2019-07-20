#include <iostream>
using namespace std;


class BSTNode{
public:
	BSTNode* left;
	BSTNode* right;
	int data;

	BSTNode(int d){
		left = right = NULL;
		data = d;
	}
};

BSTNode* insertBST(BSTNode* root, int d){

	if(root == NULL){
		BSTNode* newNode = new BSTNode(d);
		return newNode;
	}


	else if(d < root->data){
		 root->left = insertBST(root->left,d);
	}

	else root->right = insertBST(root->right,d);

   return root;

}

BSTNode* createBST(BSTNode* root){
	int d;

	while(cin >> d && d != -1){
		root = insertBST(root,d);
	}

	return root;
}


void inorder(BSTNode* root){
	if(root == NULL){
		return ;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}


int main(){
   
   BSTNode* root = NULL;

   root = createBST(root);

   inorder(root);

}