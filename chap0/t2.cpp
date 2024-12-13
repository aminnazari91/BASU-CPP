#include <iostream>
using namespace std;

int main(){
    // variable declaration and assignment.
    int a, b, c;
    a = b = 2;
    c = a + b;
    cout<< a << " + " << b << " = " << c << endl;
    cout<< &a << " " << &b << " " << &c << endl;
    return 0;
}