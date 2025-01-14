#include <iostream>
using namespace std;
int main(){

    const int n = 5;
    int A[n];

    int i, j;
    for(i=0; i<n;i++)
    {
        int temp;
        cin>> temp;
        j = 0;
        while(j<i){
            if (A[j]>temp)
                break;
            j++;
        }
        if(j==i){
            A[j] = temp;
        }
        else{
            for(int k=i; k>=j; k--){
                A[k] = A[k-1];
            }
            A[j] = temp;
        }
    }

    for(i=0;i<n; i++)
        cout<<A[i]<<"\t";
    return 0;
}
