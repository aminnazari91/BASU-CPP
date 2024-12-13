#include <iostream>
using namespace std;

int main(){
    // bitwise oprations

    int a, b;
	a = 2; 
	b = 6;
    
    cout<< (a<<2) << endl;
    cout<< (b>>1) << endl;
    cout<< (b&3) << endl;
    cout<< (b|3) << endl;
    return 0;
}