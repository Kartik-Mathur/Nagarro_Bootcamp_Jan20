// Hashmaps
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
class fruits{
public:
	string name;
	int price;
	string color;
	fruits(string n,int p, string c){
		name = n; price = p; color =c;
	}
};

int main(){
	
	unordered_map<string,fruits> h; // key : string, value: int
	// map<string,int> h; // key : string, value: int

	// Insertion :
	// 1. Way
	// h["Mango"] = 100; // Insertion
	// 2. 
	fruits F1("Apple",120,"RED");

	h.insert(make_pair("Apple",F1));
	// // 3. 
	// pair<string,int> p;
	// p.first = "Pineapple";
	// p.second = 60;
	// h.insert(p);
	// // 4.
	// pair<string,int> p1("Guava",80);
	// h.insert(p1);

	// Removal using keys can be done
	// h.erase("Mango");

	// print
	for(auto node:h){
		cout<<node.first<<"->"<<node.second.price<<' '<<node.second.name<<' '<<node.second.color<<endl;
	}

	// cout<<h["Mango"]<<endl; 

	// // Updation
	// h["Mango"] = 300; // If mango exists this will do the updation

	// cout<<h["Mango"]<<endl; // give the value for the respective key


	return 0;
}