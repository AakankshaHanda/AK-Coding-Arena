#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int mat[2][2],i,j,row_sum[2]={0},col_sum[2]={0};
	cout<<"enter array elements:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"displaying array"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	//Calculating sum row-wise
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			row_sum[i]+=mat[i][j];	
		}
	}
	
	//Calculating sum column-wise.
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			col_sum[i]+=mat[j][i];	
		}
	}
	
	for(i=0;i<2;i++){
		cout<<"Sum of elements of "<<i+1<<" row is: "<<row_sum[i]<<endl;
	}
	
	for(i=0;i<2;i++){
		cout<<"Sum of elements of "<<i+1<<" column is: "<<col_sum[i]<<endl;
	}
	
}
