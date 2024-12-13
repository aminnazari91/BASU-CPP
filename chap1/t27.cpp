#include <iostream>
using namespace std;

int main(){

    float x, fact, pow, sin, cos;
    int sign, n = 10;
    cout<<"Enter a number(radian):";
    cin>>x;

    // sin(x)
    sin = 0;
    sign = 1;
    for (int i=1; i<=n; i++){
        pow = 1;
        for (int j=1; j<=2*i-1; j++){
            pow = pow * x;
        }

        fact = 1;
        for (int j=1; j<=2*i-1; j++){
            fact *= j;
        }

        sin += sign * (pow/fact);
        sign = -sign;
    }

    //cos(x)
    cos = 1;
    sign = -1;
    for (int i=1; i<=n; i++){
        pow = 1;
        for (int j=1; j<=2*i; j++){
            pow *= x;
        }

        fact = 1;
        for (int j=1; j<=2*i; j++){
            fact *= j;
        }
        
        cos += sign * (pow/fact);
        sign = -sign;
    }

    cout<<"sin("<<x<<")="<<sin<<endl;
    cout<<"cos("<<x<<")="<<cos<<endl;
    return 0;
}