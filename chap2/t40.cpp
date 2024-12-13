#include <iostream>
using namespace std;

int  s=10;
void func(){
    static int s = 0;
    s++;
    cout<< "Local static: "<< s <<endl;
}
int main(){
    func();
    func();
    func();
    func();
    
    cout<< "Global:" << s <<endl;
    return 0;
}