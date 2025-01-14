#include <iostream>
using namespace std;

template <class T1>
T1 add(T1 a, T1 b){
	return a+b;
}
int main(){
	int a = 5, b = 6, c;
	float x = 5.5, y = 6.3, z;
	c = add<int>(a, b);
	cout<<c<<"\n";
    z = add<float>(x, y);
	cout<<z<<"\n";
    cout<<add<char>('A', 'C')<<"\n";
	return 0;
}