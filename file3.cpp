#include<iostream>
class Salary
{
	public:
	int   b_sal;
	float   g_sal,d,r;
	Salary()
	{
		cout<<"_____Salary Calculation_____";
	}
	void salcal()
	{
		 d = ( 40.0/100.0 )*( b_sal );
		 r = ( 20.0 /100.0 *( b_sal );
	         g_sal = b_sal + d + r ;
		 cout<<"\nGross Salary is "<<g_sal;
	}
};
int main()
{
	Salary S1;
	cout  <<  "\nEnter your Basic Salary - ";
	cin  >>  S1.b_sal;
	S1.salcal();
	return 0;
}
