#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[2][2],i,j,b[2][2],c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<a[i][j]<<"\t";
		}
	cout<<endl;
	
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			cin>>b[i][j];
			c
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<b[i][j]<<"\t";
		}
	cout<<endl;
	
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}cout<<endl;
	}
	
	
}
