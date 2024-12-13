#include <iostream>
using namespace std;

int main(){
    float j = 1.0f, result = 0;
    int i = 0;
    for(int i = 1; i<=5; i++, j *= 2)
        result += float(i/j);

    if (result > 2){
        float j = 2;
    }
    cout << result << endl << i << endl << j;
}
