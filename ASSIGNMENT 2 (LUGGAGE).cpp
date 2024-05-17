#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	float lbs;
	
	cout<<"Enter the pounds of your suitcase: ";
	cin>>lbs;
	
	if (lbs>50){
		cout<<"There is a $25 charge for the luggage that is heavy. If you don't want any additional fee, please reduce your belongings. Thank you.";
	}
	else{
		cout<<"The weight of your luggage is acceptable. You may now proceed to your next transaction. Thank you for your business.";
	}
	
	return 0;
}
