#include <iostream>
using namespace std;
class Employee {
private:
	string id;
	string name;
	float salary;
public:
	void putDetails(void);
	void putlistDetails(int loop);
	void getDetails(void);
	void getlistDetails(int loop);
	int paySocialInsurance();	
};
void Employee::putDetails(void)
{
	cout<<" Enter is ID: ";
	cin>>this->id;
	cout<<" Enter is name: ";
	cin>>this->name;
	cout<<"Enter is salary: ";
	cin>>this->salary;
	fflush(stdin);
}
void Employee::putlistDetails(int loop){
	for(int i = 0; i < loop; i++){
		putDetails();
	}
}
void Employee::getDetails(void)
{	float abc = paySocialInsurance();
	void sortName(int loop);
	cout<<endl;
	cout<<"information of Employee: "<<endl;
	cout<<"ID: "<<id<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"salary: "<<salary<<endl;
	cout<<"paySocialInsurance: "<<abc<<endl;
	
}
void Employee::getlistDetails(int loop){
	for(int i = 0; i < loop; i++){
		getDetails();
	}
	
}
int Employee::paySocialInsurance(){
	if(salary<5000000){
		return (salary*1.3)/100;
	}
	else{
		return (salary*1.5)/100;
	}
	
}
int main( ) {
	int loop;
	cout<<"Enter total number of Employee: ";
	cin>>loop;
	Employee employees;// cong nhan
	employees.putlistDetails(loop);
	employees.getlistDetails(loop);
	return 0;
}
