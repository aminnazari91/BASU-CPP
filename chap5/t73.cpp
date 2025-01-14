#include <iostream>
#include <cstring>
using namespace std;

struct student{
	string name;
	int age;
	float avg;
};

void print_std(student *p, int n){
	for (int i=0; i<n; i++)
		cout<<"("<<p[i].name<<","<<p[i].age<<","<<p[i].avg<<")"<<endl;
}

int main(){
	int n;
	cout<<"Enter number of student";
	cin>>n;
	student s[n];
	if (!s){
		cout<<"Error";
		return 1;
	}
	for (int i=0;i<n;i++){
		cout<<"name:";
		cin>>s[i].name;
		
		cout<<"age:";
		cin>>s[i].age ;
		
		cout<<"avg:";
		cin>>s[i].avg;		
	}
	print_std(s, n);
	
	return 0;
}