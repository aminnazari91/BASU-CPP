#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array:";
    cin>>n;
    int A[n];

    for (int i=0; i<n; i++){
        cout<<"Enter the "<< i+1 << "\'th element:";
        cin>> A[i];
    }

    for (int i=0; i<n; i++){
        cout<< 2 * A[i]<<"\t";
    }
    return 0;
}