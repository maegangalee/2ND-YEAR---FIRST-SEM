#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	float amount, average;
	
	cout<<"Amount of purchase: ";
	cin>>amount;
	
	
	
	
	if (amount==0){
		average=amount-(amount*0.05);
		cout<<"The total amount of your purchases are "<<average<<".";
		
	}
	else if (amount<=1000){
		average=amount-(amount*0.05);
		cout<<"The total amount of your purchase are "<<average<<".";
	}
	else if (amount=1001){
		average=amount-(amount*0.10);
		cout<<"The total amount of your purchase are "<<average<<".";
	}
	else if (amount<=4999){
		average=amount-(amount*0.10);
		cout<<"The total amount of your purchase are "<<average<<".";
	}
	else if (amount>=5000){
	average=amount-(amount*0.15);
	cout<<"The total amount of your purchase are "<<average<<".";
	}
	
	
	
	return 0;
	}

