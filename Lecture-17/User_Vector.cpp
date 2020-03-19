// User_Vector
#include<iostream> 
using namespace std;

class Vector{
public:
	int* arr;
	int cs;
	int ms;

	Vector(int s=2){
		arr = new int[s];
		cs = 0;
		ms = s;
	}

	void push_back(int data){
		if(cs == ms){
			int *oldarr = arr;
			int oldms = ms;
			ms = 2*ms;
			arr = new int[ms];
			// Copy the elements
			for(int i=0;i<oldms;i++){
				arr[i] = oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs] = data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	bool empty(){
		return cs == 0;
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	int operator[](int i){
		return arr[i];
	}
};

int main(){
	Vector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	// v.push_back(6);
	// v.push_back(6);
	// v.push_back(6);
	// v.push_back(6);

	v.pop_back();

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;
	cout<<"Size : "<<v.size()<<endl;
	cout<<"Capacity : "<<v.capacity()<<endl;


	return 0; 
}
