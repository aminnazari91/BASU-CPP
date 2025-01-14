#include <iostream>

using namespace std;

int main(){

    int A[] = {1,1,2,3,3,4};
    int B[] = {2,2,4,4,6,6};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(A) / sizeof(A[0]);
    int sizeC = sizeA<sizeB ? sizeA: sizeB;
    int C[sizeC];

    int i, j, k = 0;
    for (i=0; i<sizeA; i++){
        for(j=0; j<sizeB; j++){
            if(A[i] == B[j]){
                break;
            }
        }
        
        if (j == sizeB){
            continue;
        }

        for(j=0; j<k; j++){
            if(A[i] == C[j]){
                break;
            }
        }
        if (j == k){
            C[k++] = A[i];
        }
    }

    for (i=0; i<k; i++){
        cout<<C[i] <<"\t";
    }
    return 0;
}