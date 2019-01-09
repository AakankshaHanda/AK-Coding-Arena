#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],i,j,sum=0;
	cout<<"enter array elements";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"displaying";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//cout<<a[i][j];
			if(i==j){
				sum+=a[i][j];
				
			}
			
		}
	}
	cout<<sum;
}
