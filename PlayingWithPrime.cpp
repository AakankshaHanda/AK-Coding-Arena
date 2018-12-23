//WAP to find N prime numbers starting from 70.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num,count=0,flag=0,i;
	cout<<"enter how many number";
	cin>>count;
	num=70; 
	while(count>0){
		flag=0;
		for(int i=2; i<num/2;i++)
	    {
	    	if(num%i==0){
	    		flag=1;
	    		break;
			}
		}
		if(flag==0){
			cout<<num<<endl;
			count--;
		}
		num++;
	}
}

	
	


