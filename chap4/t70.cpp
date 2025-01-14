#include <iostream>
using namespace std;

int main(){

	int x=5;
	int *p, **q;
	
	p = &x;
	q = &p;
	
	cout<<&p<<" = "<<q<<endl;
	
	cout<<*p<<" = "<<**q<<endl;
	
	**q = 6;
	cout<<x<<endl;

	return 0;
}