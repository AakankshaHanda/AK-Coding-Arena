#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,a[10];
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter array elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		a[i]=a[i+1];
		
	}
	cout<<"displying after deletion";
	for(i=0;i<n-1;i++){
		cout<<a[i];
		
	}
}
