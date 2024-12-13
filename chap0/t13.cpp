#include <iostream>
using namespace std;

int main(){
    double r, s, p;
    const double pi = 3.14;
    cout<<"Enter a number:";
    cin >> r;
    s = pi * r * r;
    p = 2 * pi * r;

    cout<< "s=" << s << endl;
    cout<< "p=" << p<< endl;
    return 0;
}