#include <iostream>
using namespace std;

long int pow(int, int);

int main(){
    int base, power;
    long int result;
    base = 5;
    power = 3;
    result = pow(base, power);
    cout<<result;
    return 0;
}

long int pow(int x, int y){
    long int power = 1;
    for (int i=1; i<=y; i++){
        power *= x;
    }
    return power;
}