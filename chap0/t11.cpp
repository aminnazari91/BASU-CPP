#include <iostream>
using namespace std;

int main(){

    // short or long
    
    int a = 5; 
    long int b = 5;
    short int c = 5;
    unsigned int d = 5;
    unsigned long int e = 5;

    cout<< sizeof(a) << endl;
    cout<< sizeof(b) << endl;
    cout<< sizeof(c) << endl;
    cout<< sizeof(d) << endl;
    cout<< sizeof(e) << endl;
    
    d = -5;
    cout<<d<<endl;
    return 0;
}