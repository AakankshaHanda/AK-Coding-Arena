//Find 5 odd numbers after 50 which are multiples of 3.
#include<iostream>
using namespace std;
int main(){
	int i,count=0;
	for(i=50;count<5;i++)
	{
		if(i%2!=0){
			if(i%3==0){
				cout<<endl<<i;
				count++;	
			}
		}
		
	}
}

