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

void sort(int X[], int len){
    for (int i=0; i<len-1; i++ ){
        for(int j=0; j<len-1; j++){
            if (X[j]> X[j+1]){
                int temp;
                temp = X[j];
                X[j] = X[j+1];
                X[j+1] = temp;
            }
        }
    }
}

int main(){
    const int n = 5;
    int A[n];

    input_array(A, n);
    sort(A, n);
    print_array(A, n);

    return 0;
}