#include <iostream>
#include <cstring>
using namespace std;

int& max(int& m, int& n) 
{  return (m > n ? m : n);}

int main(){  
    int m = 44, n = 22;
    cout << m << ", " << n << ", " << max(m,n) << endl;
    
    max(m,n) = 55;

    cout << m << ", " << n << ", " << max(m,n) << endl;
}