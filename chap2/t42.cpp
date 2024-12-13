#include <iostream>
using namespace std;

void print_message_to(string name, string msg="Hello" ){
    cout << msg + " " + name <<endl;
}
int main(){
    print_message_to("Ali");
    print_message_to("Hasan", "Wellcome");
    return 0;
}