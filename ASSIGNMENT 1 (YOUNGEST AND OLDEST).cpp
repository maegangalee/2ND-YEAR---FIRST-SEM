#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	int age1;
	cout<<"User 1 Age: ";
	cin>>age1;
	
	int age2;
	cout<<"User 2 Age: ";
	cin>>age2;
	
	int age3;
	cout<<"User 3 Age: ";
	cin>>age3;
	
	if (age1<age2 && age1<age3){
		cout<<"User 1 is youngest.\n";
	}
	else if (age1>age2 && age1>age3){
		cout<<"User 1 is oldest. \n";
	}
	
	if (age2<age1 && age2<age3){
		cout<<"User 2 is youngest. \n";
	}
	else if (age2>age1 && age2>age3){
		cout<<"User 2 is oldest. \n";
	}
	
	if (age3<age1 && age3<age2){
		cout<<"User 3 is youngest. \n";
	}
	else if (age3>age1 && age3>age2){
		cout<<"User 3 is oldest. \n";
	}


return 0;
}

