// InfiniteStream
#include <iostream>
#include <queue>
#include<functional>
using namespace std;
void Print(priority_queue<int,vector<int>,greater<int> > q){
	while(!q.empty()){
		cout<<q.top()<<' ';
		q.pop();
	}	
	cout<<endl;
}

int main(){
	
	priority_queue<int,vector<int>,greater<int> > q; // Min heap
	int count = 0;
	int k = 3;
	while(true){
		int data;
		cin>>data;
		if(data == -1){
			// Print the heap
			Print(q);
		}
		else if(count<k){
			q.push(data);
			count++;
		}
		else{
			if(data>q.top()){
				q.pop();
				q.push(data);
			}
		}

	}


	return 0;
}