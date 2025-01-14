#include <iostream>
#include <fstream>	//file header
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
struct student{
	string name;
	float score;
};

void set_array(student st[], int len){
	//get information 3 time
    for (int i = 0; i < len; i++){
        cout << "Enter Name: ";
        getline(cin, st[i].name);
        
        cout << "Enter score: ";
        cin >> st[i].score;
        cout << endl;
        
        cin.ignore();
    }
}


void write_file(student st[], int len){

    // define write file stream
    ofstream outputFile("output.dat", ios::out);
    
    //check for file opening
    if ( !outputFile){
		cerr << "some thing wrong during opening file!" << endl;
		exit(1);
    }
    
    for (int i = 0; i < len; i++){
        //write in file
        outputFile << st[i].name << "|" << st[i].score << endl;
    }
    
}

void read_file(student st[], int len){

    // define write file stream
    ifstream inputFile("output.dat", ios::in);
    
    //check for file opening
    if ( !inputFile) {
      cerr << "some thing wrong during opening file!" << endl;
      exit(1);
    }     
	  // Use a while loop together with the getline() function to read the file line by line
	  string line;
    while (getline(inputFile, line)) {
      // Output the text from the file
      cout <<line<<endl;
    }
}

float avg_scores(){
	
	// define write file stream
    ifstream inputFile("output.dat", ios::in);
    
    //check for file opening
    if ( !inputFile) {
		cerr << "some thing wrong during opening file!" << endl;
		exit(1);
    }     
	// Use a while loop together with the getline() function to read the file line by line
	string line;
  float sum = 0.0f;
	float count_line = 0.0f;
    while (getline(inputFile, line)) {
        stringstream str(line);
        string part;
        int i = 0;
        
        while (getline(str, part, '|')){
            
            if (i == 1){
                char * tab2 = new char [part.length()+1];
                strcpy (tab2, part.c_str());
                cout<<tab2<<endl;
                sum += atof(tab2);
                cout<<sum<<endl;
            }
            i++;
        }
        count_line++;

    }
	return sum/count_line;
}
int main()
{
	cout<<avg_scores();
 
	return 0;
}