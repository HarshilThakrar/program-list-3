#include<iostream.h>
#include<conio.h>
class item
{
	private:
		int number,cost;

	public:
		void getdata()
		{
			cout<<"Enter Number of Items::  :: ";
			cin>>number;

			cout<<"Enter Cost of Items :: ";
			cin>>cost;

		}
		void putdata()
		{

			cout<<"Number of Items is :: "<<number<<endl;

			cout<<"Cost of Items is :: "<<cost<<endl;

		}
}i1;
void main()
{
	clrscr();

	i1.getdata();

	i1.putdata();

	getch();
}