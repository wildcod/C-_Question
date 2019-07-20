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

int heightOfBT(Node* root){

	if(!root){
		return 0;
	}

	if(!root->left && !root->right){
			return 0;
	}

	return 1 + max(heightOfBT(root->left),heightOfBT(root->right));

}


int main(){
	Node* root = NULL;

	root = createBT();

	cout << heightOfBT(root) << endl;
}