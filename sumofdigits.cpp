//WAP for finding number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
	int num,i,rem,result=0;
	cout<<"enter number";
	cin>>num;
	while(num>0){
		rem=num%10;
		result=result+rem;
		num=num/10;
	}
		cout<<result;
	
}
