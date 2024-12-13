#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    if (n<0)    
        n = -n;
    
    while(n>0){
        int r = n % 10;
        sum += r;
        n = n/10;
    }
    cout<<sum;
    return 0;
}