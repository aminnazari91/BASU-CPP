#include <iostream>
using namespace std;

long int fact(int);

int main(){
    int x;
    long int f;
    cout<<"Enter a number:";
    cin>>x;
    f = fact(x);
    cout<<x<<"! = "<<f;
    return 0;
}

long int fact(int n){
    long int result = 1;
    for (int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}