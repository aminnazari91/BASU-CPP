#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double d1, d2, d3;
    d1 = 3.14;
    d2 = 1.123456789;
    d3 = 2.0021;

    cout<< d1 << " " << d2 << " " << d3 <<endl;

    cout<< setw(12) << d1 << setw(12) << d2 << setw(12) << d3 <<endl;
    
    cout<< setw(12) << setprecision(2) << fixed << d2 <<endl;
    
    return 0;
}