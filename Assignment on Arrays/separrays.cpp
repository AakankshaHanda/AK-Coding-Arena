#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],b[10],c[10];
	int i,j=0,k=0,n;
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter A array elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"displaying first array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i]<<" ";
	}			
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		{
		    b[j]=a[i];
			j++;
			
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	
	}
	cout<<endl<<"displaying EVEN array: "<<endl;
	for(i=0;i<j;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl<<"displaying ODD array: "<<endl;
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl<<endl<<c;
	cout<<endl<<endl<<&b[j];
	cout<<endl<<endl<<b;
}
