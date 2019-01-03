#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10],n;
	cout<<"Enter the number of elements in the list.(less than 10)";
	cin>>n;
	cout<<endl;
	cin>>a[0];
	int least = a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]<least){
			least = a[i];
		}
	}
	cout<<"The smallest element is :"<<least;
	return 0;
	
}

