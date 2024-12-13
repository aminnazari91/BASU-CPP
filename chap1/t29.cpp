#include <iostream>
using namespace std;

int main(){
    int x, sum = 0;

    while(1){
        cout<<"Enter a number(for exit enter 0):"<<endl;
        cin>>x;
        if (x==0)
            break;
        sum += x;
    }
    cout<<sum;
    return 0;
}