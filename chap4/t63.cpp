#include <iostream>
#include <cstring>
using namespace std;
void circle(float r, float *, float *);


int main(){
    int n = 10, *p;
    p = &n;
    cout << n <<"\t"<<&n <<endl;
    cout <<  p <<"\t" << &p <<"\t" << *p <<endl;
    *p += 10;
    cout<<n<<endl;

    n -= 2;
    cout<<*p<<endl;
    return 0;
}

