#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	string name, ans1, ans2, ans3, ans4, ans5;
	int sc1, sc2, sc3, sc4, sc5, average;
	
	cout<<"QUIZ: NAME THE CAPITALS\n";
	cout<<"Answer the following questions in CAPITAL LETTERS.\n";
	
	cout<<"\nNickame: ";
	cin>>name;
	
	cout<<"\nQUESTION 1: What is the capital of China? ";
	cin>>ans1;
	
	if(ans1=="BEIJING"){
		sc1=1;
	}
	else{
		sc1=0;
	}
	
	cout<<"\nQUESTION 2: What is the capital of South Korea? ";
	cin>>ans2;
	
	if(ans2=="SEOUL"){
		sc2=1;
		
	}
	else{
		sc2=0;
	}
	
	cout<<"\nQUESTION 3: What is the capital of Japan? ";
	cin>>ans3;
	
	if(ans3=="TOKYO"){
		sc3=1;
	}
	else{
		sc3=0;
	}
	
	cout<<"\nQUESTION 4: What is the capital of Singapore? ";
	cin>>ans4;
	
	if(ans4=="SINGAPORE"){
		sc4=1;
	}
	else{
		sc4=0;
	}
	
	cout<<"\nQUESTION 5: What is the capital of Mongolia? ";
	cin>>ans5;
	
	if(ans5=="ULAANBAATAR"){
		sc5=1;
	}
	else{
		sc5=0;
	}
	
	
	average=sc1+sc2+sc3+sc4+sc5;
	
	cout<<"\nYou got "<<average<<" out of 5.";
	cout<<"\nThank you for taking this test!";
	
	
	return 0;
}
