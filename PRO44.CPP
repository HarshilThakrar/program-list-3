#include<iostream.h>
#include<conio.h>
class distance
{
	private:
		float mem_feet,mem_inch;

	public:
		void get_details()
		{
			cout<<"Enter Member's Feet :: ";
			cin>>mem_feet;

			cout<<"Enter Member's Inch :: ";
			cin>>mem_inch;

		}

		void display_details()
		{
			cout<<"Member's Feet is :: "<<setprecision(4)<<mem_feet<<endl;

			cout<<"Member's Inch is  :: "<<mem_inch<<endl;

		}
}d1;
void main()
{
	clrscr();

	d1.get_details();

	d1.display_details();

	getch();

}