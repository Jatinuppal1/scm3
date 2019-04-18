#include<iostream>
class Area()
{
	private:
	float l,b,a,r;
	public:
	Area()
	{
		cout<<"_____Area Calculator_____\n";
	}
	float rect();
	float sqr();
	float crcl();
};
float Area::rect()
{
	return l*b;
}
float Area::sqr()
{
	return a*a;
}
float Area::crcl()
{
	return 3.14*r*r;
}
int main()
{
	Area A;
	A.rect();
	A.sqr();
	A.crcl();
	return 0;
}

