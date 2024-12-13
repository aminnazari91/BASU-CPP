#include <iostream>
using namespace std;

int main(){
    float salary, net_salary, tax;
    cout<<"Enter your salary: ";
    cin >> salary;
    if (salary<=0){
        cout<<"Error";
    }
	else if (salary<200){
		tax = 0;
        net_salary = salary;
	} 
    else if (salary<300){
        tax = (salary - 200) * 0.05;
        net_salary = salary - tax;
    }
    else if (salary<400){
        tax = 100 * 0.05 + (salary - 300) * 0.07;
        net_salary = salary - tax;
    }
    else{
        tax = 100 * 0.05 + 100 + 0.07 + (salary - 400) * 0.1;
        net_salary = salary - tax;
    }

    cout<< "Tax: " << tax << endl << "Net Salary: " << net_salary; 
    return 0;
}