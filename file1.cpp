#include<iostream>
using namespace std;
class Details()
{
	public:
	string name ;
	int roll ;
	int sapid ; 
};
int main()
{
	Details d1;
	cout << "______Data Entry______";
        cout << "\nEnter details :";
	cout << "\nYour name - ";
	cin >> d1.name;
	cout << "\nYour roll no. - ";
	cin >> d1.roll;
	cout << "\nYour SapId - ";
	cin >> d1.sapid;
	cout << "\nEntered Details are : " << d1.name << "\t" << d1.roll << "\t" << d1.sapid;
	return 0;
}
