#include <iostream>
using namespace std;

int s=10;
void func1(){
    int s = 0;
    s++;
    cout<< "Local variable:" << s <<endl;
}

void func2(){
    s++;
    cout<< "global variable:" << s <<endl;
}
int main(){
    func1();
    func1();
    func2();
    func2();
    cout<<"main "<< s <<endl;
    return 0;
}