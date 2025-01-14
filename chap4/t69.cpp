#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int main(){
	int (*p)(int, int);
	p = add;
	int s = p(5,6);
	cout<<s;
	return 0;
}