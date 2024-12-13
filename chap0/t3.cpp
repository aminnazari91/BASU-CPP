#include <iostream>
using namespace std;

int main(){
    // variables types
    int int_number = 152;
    float pi = 3.14f;
    double d = 0.000000000001;
    cout<<"float: "<<pi<<"\ndouble: "<<d<<endl;

    char ch1 = 'a';
    char ch2 = 'A';
    cout<<"lowercase: "<<ch1 <<"\t uppercase: "<< ch2<<endl;

    string name="Ali";
    string family="Ahmadi";
    cout<< "Hello "<<name <<" "<<family<<endl;

    bool man = true;
    bool women = false;
    cout << "Ali is a man? " << man << " | "<< !women <<endl;
    return 0;
}