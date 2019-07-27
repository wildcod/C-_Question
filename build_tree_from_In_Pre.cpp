#include <iostream>
#include <queue>
using namespace std;

class Node {
	public :
	char data;
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


int findRoot(char arr[], int strt, int end, char value)  
{  
    int i;  
    for (i = strt; i <= end; i++)  
    {  
        if (arr[i] == value)  
            return i;  
    }  
}  

Node* buildTree(char in[],char post[], int be,int en){
	if(be > en) return NULL;

	static int postIndex = en; 

	Node* t = new Node(post[postIndex]);
	postIndex--;

	if(be == en) return t;

	int inIndex = findRoot(in,be,en,t->data);

	t->left = buildTree(in,post,be,inIndex-1);
	t->right = buildTree(in,post,inIndex+1,en);

	return t;

}


int main()
{
	Node* root = NULL;

	char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };  
    char post[] = { 'A', 'B', 'D', 'E', 'C', 'F' };  

    int len = sizeof(post)/sizeof(char);

	root = buildTree(in,post,0,len-1);

	preorder(root);
}