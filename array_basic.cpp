#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n;
	cout<<"Enter the number of elements in the list.(less than 10)";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Printing the elemtns of the array.\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
	
}
