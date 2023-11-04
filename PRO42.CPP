#include<iostream.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int emp_code,emp_salary;
	char emp_name[20],emp_branch[20];

}e1;
void main()
{
	clrscr();

	cout<<"Enter Code of Employee      :: ";
	cin>>e1.emp_code;

	cout<<"Enter Name of Employee      :: ";
	cin>>e1.emp_name;

	cout<<"Enter Salary of Employee    :: ";
	cin>>e1.emp_salary;

	cout<<"Enter Branch of Employee    :: ";
	cin>>e1.emp_branch;

	cout<<"Your Code is   :: "<<e1.emp_code<<endl;

	cout<<"Your Name is   :: "<<e1.emp_name<<endl;

	cout<<"Your Salary is :: "<<e1.emp_salary<<endl;

	cout<<"Your Branch is :: "<<e1.emp_branch<<endl;

	getch();

}