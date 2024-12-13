#include <iostream>
using namespace std;

int main(){
    int n, reverse = 0;
    cout<<"Enter a number: "<<endl;
    cin >> n;

    int flag = 1;
    if (n<0){    
        n = -n;
        flag = -1;
    }

    while(n>0){
        int r = n % 10;
        reverse = reverse * 10 + r;
        n = n/10;
    }
    cout<< flag * reverse;
    return 0;
}