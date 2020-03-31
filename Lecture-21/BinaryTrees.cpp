#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data =d;
		left = right=NULL;
	}
};

node* CreateBT(){
	int data;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	node* root = new node(data);
	root->left = CreateBT();
	root->right = CreateBT();

	return root;
}

void PreOrder(node* root){
	if(root == NULL){
		return;
	}

	cout<<root->data<<' ';
	PreOrder(root->left);
	PreOrder(root->right);
}


void InOrder(node* root){
	if(root == NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<' ';
	InOrder(root->right);
}


void PostOrder(node* root){
	if(root == NULL){
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<' ';
}

int main(){
	node* root = NULL;

	root = CreateBT();
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;



	return 0;
}