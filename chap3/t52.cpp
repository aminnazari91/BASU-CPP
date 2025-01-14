#include <iostream>
using namespace std;
int find(int X[], int len, int item);
int main(){
    int A[]={1,2,3,4,5};
    int idx = find(A, 5, 2);
    cout<<idx;
    return 0;
}

int find(int X[], int len, int item){
    for (int i=0; i<len; i++){
        if (X[i] == item){
            return i;
        }
    }
    return -1;
}