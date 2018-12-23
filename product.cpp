//WAP to find product of all the natural numbers between 11-20,excluding the multiples of 3(use continue statement)

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int prod=11,i,n;
	cout<<"enter numbers";
	cin>>prod;
	for(i=11;i<=20;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		else
		{
			prod=prod*i;
		}
	}
	cout<<prod;
	
}
