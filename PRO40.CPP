#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
struct student
{
	int std;
	float per;
	char name[20];

}s1;
void main()
{
	clrscr();

	cout<<"Enter Name of Student       :: ";
	cin>>s1.name;

	cout<<"Enter Standard of Student   :: ";
	cin>>s1.std;

	cout<<"Enter Percentage of Student :: ";
	cin>>s1.per;

	cout<<"Your Name is       :: "<<s1.name<<endl;

	cout<<"Your Standard is   :: "<<s1.std<<endl;

	cout<<"Your Percentage is :: "<<setprecision(4)<<s1.per<<endl;

	getch();

}