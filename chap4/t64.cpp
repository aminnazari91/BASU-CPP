#include <iostream>
#include <cstring>
using namespace std;
void circle(float r, float *, float *);


int main(){
    
    float r, x, y;
    r = 2.5;
    circle(r, &x, &y);
    cout<<"S = "<<x<<"P = "<<y;    
    return 0;
}

void circle(float r, float *S, float *P){
    *S = 3.14 * r * r;
    *P = 2 * 3.14 * r;
}