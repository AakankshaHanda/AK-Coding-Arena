#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum=0;
	float avg = 0.0;
	
	cout<<"enter n numbers";
	
	for(i=1;i<=10;i++)
	{
		cin>>n;
		sum+=n;
		
	}
	avg=sum/10;
	cout<<"average is"<<avg;
}
