//WAP to reverse the first and last digit of a number where a func getDigitCount() and reverse() are two functions with integer return type.
#include<iostream>
#include<math.h>
using namespace std;
int getDigitCount(int);
int reverse(int);
int main(){
	int num,val,nodig;
	cout<<"enter the number";
	cin>>num;
	cout<<reverse(num);
	return 0;
}
int getDigitCount(int num){
	int nod;
	while(num>0){
		nod++;
		num=num/10;
	}
	return nod;
}

int reverse(int originalNumber){
	int noOfDigits = getDigitCount(originalNumber);
	int last=originalNumber%10;
	int first=originalNumber/(pow(10.0,(double)noOfDigits-1));
	double divisor = pow(10.0,(double)noOfDigits-1);
	int middleNumber=originalNumber%(int)divisor;	 
	middleNumber-=last;
	int newNumber = (last*(pow(10,noOfDigits-1)))+middleNumber+first;
	return newNumber;
}

