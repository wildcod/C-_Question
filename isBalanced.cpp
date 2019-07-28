#include <bits/stdc++.h> 
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

int heightOfBT(Node* root){

	if(!root){
		return 0;
	}

	if(!root->left && !root->right){
			return 0;
	}

	return 1 + max(heightOfBT(root->left),heightOfBT(root->right));

}

bool isBalanced(Node* root){
	if(!root) return true;

	int leftHeight = heightOfBT(root->left); 
	int rightHeight = heightOfBT(root->right);

	if((leftHeight - rightHeight) <= 1){
		return isBalanced(root->left) && isBalanced(root->right);
	}
	return false;

}
bool ans = true;
int isBalanced2(Node* root){
	if(!root){
		return 1;
	}

	if(!root->left && !root->right){
			return 0;
	}

	int lh = isBalanced2(root->left);
	int rh = isBalanced2(root->right);

	if(abs(lh-rh) >= 2){
		ans = false;
	}

	return 1 + max(lh,rh);

}


int main()
{
	Node* root = NULL;
	root = createBT();
	int result = isBalanced2(root);
	if(ans) cout << "true";
	else cout << "false";
}