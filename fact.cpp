#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,fact=1,num;
	cout<<"enter number";
	cin>>num;
//	for(i=1;i<=num;i++){
//	
//		fact=fact*i;
//	}
	i=1;
	while (i<=num){
		fact=fact*i;
		i++;
	}
	
	cout<<"factorial is"<<fact;
}
