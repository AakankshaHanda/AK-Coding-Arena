#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n,number,start;
	cout<<"Enter the number of elements in the list.(less than 10)";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the new element.";
	cin>>number;
	//For Starting
	for(int i=n;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=number;
	n=n+1;
		
	
	cout<<"Printing the elemtns of the new array.\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
	
}
