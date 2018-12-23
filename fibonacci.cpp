#include<iostream>
using namespace std;
int main(){
	int n,i,num2=0,num3=1,sum=0;
	float num1;
	cout<<"enter the value of n";
	cin>>n;
	for(i=1;i<=n;i++){
		//For the first two terms of the series.
		//if(i<=1){
		//	num1=i;
		//	cout<<endl<<i;
		//}
	//	else{
			
			num1=num2+num3;
			num2=num3;
			num3=num1;
			cout<<endl<<num1;
			sum+=1/num1;
			
			
		//}
	}
	cout<<sum;
}


