#include <iostream>
using namespace std;
struct point{
	int x=0;
	int y=0;
	void set_point(int a, int b){
		
		this->x = a;
		this->y = b;
		//return this;
	}	
	void get_point(){
		cout<<this->x<<"\t"<<this->y;
	}
}; 

struct line {
	point p1, p2;
};

int main(){
	line l1;
	point p;
	p.set_point(12, 5);
	p.get_point();
	/*
	cout<<"x:"<<l1.p1.x<<"\t"<<l1.p2.x<<endl;
	cout<<"y:"<<l1.p1.y<<"\t"<<l1.p2.y;
	*/
	return 0;
}