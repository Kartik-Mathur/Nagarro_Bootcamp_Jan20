// BST
#include <iostream>
#include <queue>
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

node* InsertInBst(node* root,int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(data<=root->data){
		// Data will be inserted in left
		root->left = InsertInBst(root->left,data);
	}
	else{
		// Data will be inserted in right
		root->right = InsertInBst(root->right,data);
	}
	return root;
}

node* CreateBST(){
	node* root = NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root = InsertInBst(root,data);

		cin>>data;
	}
	return root;
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	Pair p;
	if(root == NULL){
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height,right.height)+1;
	if(abs(left.height-right.height)<=1 && left.balanced && right.balanced){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}
	return p;
}

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root == NULL){
		return true;
	}

	if(root->data>=min && root->data<=max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}
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

void LevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* ans = q.front();
		q.pop();
		if(ans == NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<ans->data<<" ";
			if(ans->left){
				q.push(ans->left);
			}
			if(ans->right){
				q.push(ans->right);
			}
		}
	}
}

int main(){
	node* root = NULL;

	root = CreateBST();
	Pair p = isBalanced(root);
	if(p.balanced){
		cout<<"Balanced "<<endl;
	}
	else{
		cout<<"Not Balanced"<<endl;
	}
	cout<<"Height : "<<p.height<<endl;
	if(isBST(root)){
		cout<<"BST"<<endl;
	}
	else{
		cout<<"Not a BST"<<endl;
	}
	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	// LevelOrder(root);
	return 0;
}