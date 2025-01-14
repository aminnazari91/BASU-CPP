#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    
    b = 4;
    cout<<a<<", "<<b;
    return 0;
}

