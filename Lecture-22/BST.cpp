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

node* ArrayToBst(int *a,int s,int e){
	// base case
	if(s>e){
		return NULL;
	}

	int mid = (s+e)/2;
	node* root = new node(a[mid]);
	root->left = ArrayToBst(a,s,mid-1);
	root->right = ArrayToBst(a,mid+1,e);
	return root;
}

class LinkedList{
public:
	node* head;
	node* tail;
};

LinkedList BSTtoLL(node* root){
	LinkedList l;
	if(root == NULL){
		l.head = l.tail = NULL;
		return l;
	}

	if(root->left == NULL && root->right == NULL){
		l.head = l.tail = root;
		return l;
	}
	else if(root->left != NULL && root->right == NULL){
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail =root;
		return l;
	}
	else if(root->left == NULL && root->right != NULL){
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head =root;
		l.tail = right.tail;
		return l;
	}
	else{
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->right;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* root = NULL;
	// int a[] = {1,2,3,4,5,6,7,8};
	// int n = sizeof(a)/sizeof(int);

	// root = ArrayToBst(a,0,n-1);

	root = CreateBST();
	LevelOrder(root);
	
	// LinkedList l = BSTtoLL(root);
	// Print(l.head);
	// Pair p = isBalanced(root);
	// if(p.balanced){
	// 	cout<<"Balanced "<<endl;
	// }
	// else{
	// 	cout<<"Not Balanced"<<endl;
	// }
	// cout<<"Height : "<<p.height<<endl;
	// if(isBST(root)){
	// 	cout<<"BST"<<endl;
	// }
	// else{
	// 	cout<<"Not a BST"<<endl;
	// }
	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	LevelOrder(root);
	return 0;
}