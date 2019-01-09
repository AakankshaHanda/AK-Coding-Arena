#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n;
	cout<<"Enter the number of elements in the list.(less than 10)";
	cin>>n;
	cout<<endl;
	cin>>a[0];
	int lrgst = a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>lrgst){
			lrgst = a[i];
		}
	}
	cout<<"The smallest element is :"<<lrgst;
	return 0;
	
}

