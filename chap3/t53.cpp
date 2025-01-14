#include <iostream>
using namespace std;

void input_array(int X[], int len){
    for(int i=0; i<len; i++){
        cout<<"Enter the "<<i+1<<"\'th element:";
        cin>>X[i];
    }
}

int binary_search(int X[], int len, int item){
    int high, low, mid;

    high = len-1;
    low = 0;
    while(high>=low){
        mid = (high+low) / 2;
        if (X[mid] == item)
            return mid;
        else if(X[mid] > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
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
    int A[n] = {1,2,3,4,5};

    sort(A, n);
    for (int i=0; i<10; i++){
        int idx = binary_search(A, n, i);
        cout<<i <<" = " <<idx<<endl;
    }
    return 0;
}