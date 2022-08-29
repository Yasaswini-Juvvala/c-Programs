#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age:";
	cin>>age;
	if(age<18)
	{
		cout<<"the person is not eligible to vote";
		cout<<"\n the person is eligible after "<<18-age<<"years";
	}
	else
	{
		cout<<"the person is eligible to vote";
	}
	return 0;
}
