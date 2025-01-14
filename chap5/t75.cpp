#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

struct point{
	int x=0, y=0;
	string name;
	void set(int a, int b){
		this->x = a;
		this->y = b;
	}
	void get(){
		cout<<"("<<this->x<<","<<this->y<<")"<<endl;
	}
};

struct line{
	point S,E;
	void set(point p1, point p2){
		this->S = p1;
		this->E = p2;
	}
	void set(int a, int b, int c, int d){
		point p1, p2;
		p1.set(a,b);
		p2.set(c,d);
		
		this->S = p1;
		this->E = p2;
	}
	void get(){
		cout<<"Start point:";
		this->S.get();
		cout<<"End point:";
		this->E.get();
	}
};
//p.set(5,6)// p.x = 5, p.y = 6
point add_point(point a, point b){
	point c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
} 
void set_points(point *p, int n){
	for (int i=0; i<n; i++){
		cout<<"Enter point "<< i +1 <<".x :";
		cin>>(*(p+i)).x;
		cout<<"Enter point "<< i +1 <<".y :";
		cin>>p[i].y;
	}
}
double distance(point a, point b){
	return sqrt(pow((a.x-b.x), 2) + pow((a.y-b.y), 2));
}
int main(){
	
	/*
	point p1,p2,p3,p4;
	p1.x = 10;
	p1.y = 20;
	p2.x = 100;
	p2.y = 200;
	
	p3 = add_point(p1, p2);
	cout<<"p1"<<endl;
	cout<<"("<<p1.x<<","<<p1.y<<")"<<endl;
	
	cout<<"p2"<<endl;
	cout<<"("<<p2.x<<","<<p2.y<<")"<<endl;
	
	cout<<"p3"<<endl;
	cout<<"("<<p3.x<<","<<p3.y<<")"<<endl;
	
	cout<<"p4"<<endl;
	cout<<"("<<p4.x<<","<<p4.y<<")"<<endl;
	*/
	/*
	int n;
	point *p;
	cout<<"Enter No Points:";
	cin>>n;
	p = new point [n];
	set_points(p, n);
	*/
	/*
	point p1, p2;
	p2.set(5,6);
	cout<<"p1"<<endl;
	//cout<<"("<<p1.x<<","<<p1.y<<")"<<endl;
	p1.get();
	
	cout<<"p2"<<endl;
	//cout<<"("<<p2.x<<","<<p2.y<<")"<<endl;
	p2.get();
	
	//cout<<distance(p1, p2);
	*/
	/*
	point p1, p2;
	p1.set(5,5);
	line l1;
	l1.set(p1, p2);
	l1.get();
	*/
	int x=0,y=5,z=10,w=60;
	line l1;
	l1.set(x, y, z, w );
	
	l1.get();
	return 0;
}