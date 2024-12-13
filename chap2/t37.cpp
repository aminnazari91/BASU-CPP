#include <iostream>
using namespace std;

float Pi();

int main(){
    float r, S, P;
    cout<<"Enter the radius:";
    cin >>r;
    S = Pi() * r * r;
    P = 2 * Pi() * r; 
    cout<<"S = " << S << " P = " << P;
    return 0;
}

float Pi(){
    return 3.14;
}