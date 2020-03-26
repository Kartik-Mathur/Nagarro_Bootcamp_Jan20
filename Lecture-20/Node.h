#include<iostream> 
using namespace std;

template<typename T>
class node{
public:
	T data;
	node<T>* next;
	node(T d){
		data = d;
		next = NULL;
	}
};