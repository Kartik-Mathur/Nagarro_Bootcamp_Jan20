// OOPS
#include<iostream> 
using namespace std;

// -------------------------------- BLUEPRINT --------------------------------------
class Car{
public:
	char name[100];
	int price;
	int model;
	// Default Construtor
	Car(){
		cout<<"In Default Constructor"<<endl;
	}

	// Paramaterized Constructor
	Car(char *n,int p,int m){
		cout<<"In Prameterized Constructor"<<endl;
		strcpy(name,n);
		price = p;
		model = m;
	}
	// Copy Constructor
	Car(Car &X){ 
		cout<<"In Copy Constructor"<<endl;
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
	}

	// Copy Assignment Operator
	void operator=(Car X){
		cout<<"In Copy Assigment Operator"<<endl;
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
	}

	// Functions
	void Print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Model : "<<model<<endl<<endl;
	}

	// Destructor
	~Car(){
		cout<<"In Destructor "<<name<<endl;
	}
};
// ---------------------------------------------------------------------------------

int main(){
	Car a; // Object of class Car

	// a.name = "BMW"; // because its a character array, and this is not allowed in character arrays
	// a.name[0] = 'B';
	strcpy(a.name,"BMW");  
	a.price = 100;
	a.model = 2015;

	// cout<<a.name<<endl;
	// cout<<a.price<<endl;
	// cout<<a.model<<endl;

	Car b;
	strcpy(b.name,"Audi");
	b.price = 150;
	b.model = 2016;

	Car c("Maruti",200,2020);
	// cout<<b.name<<endl;
	// cout<<b.price<<endl;
	// cout<<b.model<<endl;
	// Copy Constructor
	// 1. Car d = c; 
	// 2. Car d(c);, These are the two ways to call copy constructor
	Car d(c); // Copy Constructor
	
	d = b; // Copy Assignment Operator

	a.Print();
	b.Print();
	c.Print(); 
	d.Print(); 

	return 0; 
}
