#include <iostream>
using namespace std;

void hello(string name);

int main(){
    string name;
    cout<<"Enter your name:";
    cin>>name;
    hello(name);
    return 0;
}

void hello(string name){
    cout<<"Hello "<<name<<endl;
}