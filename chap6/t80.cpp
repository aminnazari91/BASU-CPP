#include <iostream>
#include <fstream>

using namespace std;

struct student{
	int id;
	char name[21];
	int age;
	float avg;
}st;

void read_binary(){
	fstream file;
	file.open("f3", ios::in|ios::binary);
	
	while (file.read((char *) &st, sizeof(st))){
		cout<<st.name<<" "<<st.avg<<" "<<st.age<<endl;
	}
	file.close();
}

void search(){
	fstream file;
	file.open("f3", ios::in|ios::binary);
	int key;
	cin>>key;
	file.seekg(key*sizeof(st), ios::beg);
	file.read((char *) &st, sizeof(st));
	cout<<st.name<<" "<<st.avg<<" "<<st.age<<endl;
	
	file.close();
}

void edit(){
	fstream file;
	file.open("f3", ios::in|ios::out|ios::binary);
	int key;
	cin>>key;
	file.seekg(key*sizeof(st), ios::beg);
	file.read((char *) &st, sizeof(st));
	cout<<st.name<<" "<<st.avg<<" "<<st.age<<endl;
	cout<<"Enter name: ";
		cin>>st.name;
		
		cout<<"Enter age: ";
		cin>>st.age;
		
		cout<<"Enter avg: ";
		cin>>st.avg;
		file.seekp(st.id*sizeof(st), ios::beg);
		file.write((char *) &st, sizeof(st));
	file.close();
}

void edit2(){
	fstream in;
	in.open("f3", ios::in|ios::binary);
	
	fstream out;
	out.open("temp", ios::out|ios::binary);
	int c=0;
	while (in.read((char *) &st, sizeof(st))){
		if (st.id!=0){
			//out.seekp(c*sizeof(st), ios::beg);
			out.write((char *) &st, sizeof(st));
			cout<<st.id<<endl;
			//c++;
		}
	}
	
	in.close();
	
	out.close();
	remove("f3");
	rename("temp", "f3");
	
}
int main(){
	    
	fstream file;
	file.open("f3", ios::out|ios::binary);
	while(1){
		char ch;
		cout<<"Do you want add another user. y/n: ";
		cin>>ch;
		//cin.ignore();
		if (ch != 'y')
			break;
		cout<<"Enter id: ";
		cin>>st.id;
		
		cout<<"Enter name: ";
		cin>>st.name;
		
		cout<<"Enter age: ";
		cin>>st.age;
		
		cout<<"Enter avg: ";
		cin>>st.avg;
		file.seekp(st.id*sizeof(st), ios::beg);
		file.write((char *) &st, sizeof(st));
		
	}
	file.close();
	
	//read_binary();
	//search();
	//edit2();
	read_binary();
	return 0;
}