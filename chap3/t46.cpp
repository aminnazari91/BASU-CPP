#include <iostream>
using namespace std;

void input_array(int X[], int len){
    for(int i=0; i<len; i++){
        cout<<"Enter the "<<i+1<<"\'th element:";
        cin>>X[i];
    }
}

void print_array(int X[], int len){
    for(int i=0; i<len; i++){
        cout<<X[i]<<"\t";
    }
} 

int main(){
    const int n = 5;
    int A[n];

    input_array(A, n);
    print_array(A, n);

    return 0;
}