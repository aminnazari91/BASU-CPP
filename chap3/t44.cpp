#include <iostream>

using namespace std;

int main(){
    float B[] = {1.0, 2.3, 2.5, 5.1};
    int sizeB = sizeof(B) / sizeof(B[0]);

    for (int i=0; i<sizeB; i++){
        cout<<B[i]<<"\t";
    }
    return 0;
}