#include <iostream>
using namespace std;

int main(){
    int i, x, sum = 0;
    i = 0;
    while(i++<10){
        cout<<"Enter a number:"<<endl;
        cin>>x;
        if (x<0)
            continue;
        sum += x;

    }
    cout<<sum;
    return 0;
}