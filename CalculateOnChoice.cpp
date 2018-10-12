#include<iostream>
using namespace std;
int calculate(char, int, int);
int main(){
	int n1,n2,n3;
	cin>>n1>>n2;
	char choice;
	cin>>choice;
	n3=calculate(choice,n1,n2);
	cout<<endl<<"The output is "<<n3;
	return 0;	
}

int calculate(char choice, int num1, int num2){
	switch(choice){
		case '*':
			return num1*num2;
			break;
		case '/':
			if(num2!=0){
				return num1/num2;
				break;
			}
			else{
				cout<<"Number cannot be divided by zero.";
				exit(-1);
			}
		default:
			cout<<"Invalid Choice";
			exit(-1);
	}
}
