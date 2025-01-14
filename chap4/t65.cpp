#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char A[]="This is a test";
    int len = sizeof(A) / sizeof(A[0]);

    char *p;
    p = A;

    for(int i=0; i<len; i++){
        cout<< *(p+i)<<endl;
    }
    return 0;
}