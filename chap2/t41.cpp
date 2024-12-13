#include <iostream>
using namespace std;

int add(int x=1, int y=2){
    return (x+y);
}
int main(){
    cout<< "Use defaults values:" << add() <<endl;
    cout<< "Use default value for the first parameters:" << add(5) <<endl;
    cout<< "Don't use default values:" << add(5, 12) <<endl;
    return 0;
}