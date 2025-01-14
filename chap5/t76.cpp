#include <iostream>
#include <cstdlib> 
using namespace std;

struct node{
	int value=0;
	node *link=NULL;
};

struct queue{
	node *front, *rear;
	
	bool isEmpty(){
		if (front == NULL)
			return 1;
		return 0;
	}
	
	void enQueue(int x){
		node *temp;
		temp = (node *) malloc(sizeof(node));
		if (!temp)
			cout<<"Error";
		else{
			
			temp->value = x;
			temp->link = NULL;
			
			if (isEmpty()){
				front = rear = temp;
			}
			
			else{
				rear->link = temp;
				rear = temp; 
			}
		}
	}
	
	int deQueue(){
		node *temp;
		if (!isEmpty()){
			temp = front;
			front = front->link;
			//if (front == rear)
			//	rear = NULL;
			
			int value = temp->value;
			temp->link = NULL;
			free(temp);
			return value;
		}
		return -1;
	}
	
	void display(){
		cout<<"Display all nodes:";
		node *temp;
		temp = front;
		while(temp){
			cout<<temp->value<<"\t";
			temp = temp->link;
		}
		//front = temp;
	}
}q;

int main(){
	//q = {0,NULL,NULL};
	//cout<<q.isEmpty()<<endl;
	q.enQueue(5);
	//cout<<q.isEmpty()<<endl;
	q.enQueue(6);
	q.enQueue(7);
	q.enQueue(8);
	q.display();
	cout<<q.deQueue()<<" "<<q.deQueue()<<endl;
	q.display();
	//cout<<q.isEmpty();
	
	return 0;
}