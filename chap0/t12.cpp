#include <iostream>
using namespace std;

int main(){
    int a, b, c, max;
    cout<<"Enter muliple numbers splited by spaces(a, b, c):";
    max = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c );
    cout << max;
    return 0;
}