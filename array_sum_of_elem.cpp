#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n,sum=0;
	cout<<"Enter the number of elements in the list.(less than 10)";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"The sum of elements is :"<<sum;
	return 0;
	
}
