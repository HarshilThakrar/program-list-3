#include<iostream.h>
#include<conio.h>
class shape
{
	public:
		int height,base;

		void display_shape();
}s1;
void main()
{
	clrscr();

	s1.display_shape();

	getch();

}
void shape :: display_shape()
{
	height=90;
	base=9;

	cout<<"Given Height is :: "<<height<<endl;

	cout<<"Given Base is   :: "<<base<<endl;
}