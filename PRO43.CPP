#include<iostream.h>
#include<conio.h>
class student
{       private:
		char name[20];
		int age;

	public:
		void get_details()
		{
			cout<<"Enter Student Name :: ";
			cin>>name;

			cout<<"Enter Student Age  :: ";
			cin>>age;

		}

		void display_details()
		{
			cout<<"Student Name is :: "<<name<<endl;

			cout<<"Student Age is  :: "<<age<<endl;

		}
}s1;
void main()
{
	clrscr();

	s1.get_details();

	s1.display_details();

	getch();

}