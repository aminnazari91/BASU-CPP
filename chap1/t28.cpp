#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int t = time(0);
    cout<<t<<endl;
    srand(t);    
    for (int i=0;i< 10; i++)
    {
        cout<<(rand()%1000)<<" ";
    }
    return 0;
}