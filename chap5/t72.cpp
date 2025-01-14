#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct point{
	float x=0, y=0;
};

float distance(point p1, point p2){
	return sqrt(pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2));
}

int main(){
	point p,q;
	cout<<"("<<p.x<<","<<p.y<<")"<<setw(20);
	q.x = 10;
	q.y = 10;
	cout<<"("<<q.x<<","<<q.y<<")"<<endl;
	cout<<"distance: "<<distance(p,q);
	return 0;
}