#include <iostream>
using namespace std;

void set_mat(int *a, int n){
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (i == j)
				*(a+i*n+j) = 0;
			else{
				cout<<"Enter edge ("<<i+1<<","<<j+1<<"): ";
				cin>> *(a+i*n+j);
			}
}

void get_mat(int *a, int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
			cout<< *(a+i*n+j)<<"\t";
		cout<<"\n";
	}
}

void get_mat(double *a, int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
			cout<< *(a+i*n+j)<<"\t";
		cout<<"\n";
	}
}


void new_path(int *a,double *b, int n){
	
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			*(b+i*n+j)  = *(a+i*n+j);
			
	for (int i=1; i<n; i++){
		for (int j=0; j<i; j++){
			if ( *(a+i*n+j) == *(a+j*n+i)){
				*(b+i*n+j) -= *(a+i*n+j) * 0.1;
				*(b+j*n+i) = *(b+i*n+j);
			}
			else{
				*(b+i*n+j) = (*(a+i*n+j)  + *(a+j*n+i)) / 2;
				*(b+j*n+i) = *(b+i*n+j) ;
			}
		}
	}
}
int main(){
	int n, *a;
	double *b;
	cout<<"Enter No cities:";
	cin>>n;
	
	a = new int [n*n];
	b = new double [n*n];
	
	set_mat(a, n);
	get_mat(a, n);
	new_path(a, b, n);
	get_mat(b, n);
	return 0;
}