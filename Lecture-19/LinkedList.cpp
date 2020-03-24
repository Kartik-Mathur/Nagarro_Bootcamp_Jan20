// LinkedList
#include<iostream> 
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}

void InsertAtFront(node* &head,int data){
	if(head == NULL){
		head = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void Print(node* head){

	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

node* SearchLL(node* head,int key){

	while(head){
		if(head->data == key){
			return head;
		}
		head =head->next;
	}
	return NULL;
}

node* mid(node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

node* merge(node* h1,node* h2){
	// Base case
	if(h1 == NULL){
		return h2;
	}
	if(h2 == NULL){
		return h1;
	}

	// Recursive case
	node* newHead;
	if(h1->data<h2->data){
		newHead = h1;
		newHead->next = merge(h1->next,h2);
	}
	else{
		newHead = h2;
		newHead->next = merge(h1,h2->next);
	}
	return newHead;
}

node* mergeSortLL(node* head){
	// Base case
	if(head == NULL || head->next == NULL){
		return head;
	}

	// Recursive case
	//1. Divide
	node* mid1 = mid(head);

	node* a = head;
	node* b = mid1->next;
	mid1->next = NULL;

	//2 . Sort
	a = mergeSortLL(a);
	b = mergeSortLL(b);

	//3. Merge
	node* newHead = merge(a,b);
	return newHead;	
}

void BubbleSortLL(node* &head){
	int n = lengthLL(head);

	for(int i=1;i<=n-1;i++){

		node* c = head;
		node* p = NULL;
		node* n;
		while(c && c->next){
			n = c->next;

			if(c->data>n->data){
				// swapping will take place
				if(p == NULL){
					// head will change
					c->next = n->next;
					n->next = c;
					head = p =n;
				}
				else{
					// head wont change
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else{
				// swapping wont happen
				p = c;
				c = n;
			}

		}

	}
}

bool isCyclic(node *head){

	node* slow = head;
	node* fast = head;

	while(fast && fast->next){
		fast = fast->next->next;
		slow = slow->next;
		if(fast == slow){
			return true;
		}
	}
	return false;
}

void CreateCycle(node* head){
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = head->next->next;
}



int main(){

	node* head = NULL;
	
	for(int i=8;i>=1;i--){
		InsertAtFront(head,i);
	}

	Print(head);
	CreateCycle(head);
	// Print(head);
	if(isCyclic(head)){
		cout<<"Cycle Detected"<<endl;
	}
	else{
		cout<<"No Cycle"<<endl;
	}

	return 0; 	
}
