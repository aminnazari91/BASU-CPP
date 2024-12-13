#include <iostream>
using namespace std;

int add(int x, int y){
    cout <<"int_add: ";
    return (x+y);
}

float add(float x, float y){
    cout <<"float_add: ";
    return (x+y);
}

string add(string x, string y){
    cout <<"string_add: ";
    return (x+y);
}

int main(){
    cout<< add(4, 5) << endl;
    cout<< add(4.0, 5) << endl;
    cout << add(4.0f, 5.0f) << endl;
    cout << add("4", "5") << endl;

    return 0;
}