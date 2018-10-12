#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the numbers";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
			cout<<endl<<"a is the greatest";
	}
	else {
		if (b>c)
		{ 
			cout<<"b is the greatest";
		}
		else
			cout<<"c is the greatest.";
	}
	return 0;
	
}
