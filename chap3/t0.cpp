#include <iostream>

using namespace std;

void get_array(int X[], int len){
    for(int i=0; i<len; i++){
        cout<<"Enter the "<<i+1<<"\'th element:";
        cin>>X[i];
    }
}

void print(string X[], int len){
    for(int i=0; i<len; i++){
        cout<<X[i]<<"\t";
    }
} 

void sort(string X[], int len){
    for (int i=len-1; i>0; i-- ){
        for(int j=0; j<i; j++){
            if (X[j]> X[j+1]){
                string temp;
                temp = X[j];
                X[j] = X[j+1];
                X[j+1] = temp;
            }
        }
    }
}
int main(){

    string names[10];
    for(int i=0; i<10; i++){
        cin>> names[i];
    }

    sort(names, 10);
    print(names, 10);
    return 0;
}