#include <iostream>
using namespace std;

int main(){
    // logical operators
    int a, b;
	a = 2; 
	b = 6;
    
    cout<< ((a>=b) || (a<5)) << endl;
    cout<< ((a>b) && (a<5)) << endl;
    cout<< !(a==b) << endl; 
    
    return 0;
}