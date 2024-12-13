#include <iostream>
using namespace std;

void add(int, int);

int main(){
    int a, b;
    a = 5;
    b = 6;
    add(a, b);
    return 0;
}

void add(int x, int y){
    cout<< (x + y) <<endl;
}