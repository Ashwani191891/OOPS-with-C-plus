#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact;
	
	if(n>=1)
	{
		fact = n*factorial(n-1);
		return fact;
	}
	
	else
	{
		return 1;
	}
}


int main()
{
	int num,result;
	
	cout<<"Enter the number of which you want to calculte factorial : ";
	cin>>num;
	
	if(num<0)
	{
		cout<<"\t Factorial of negative numbers is not defined. ";
	}
	
	else
	{
		result = factorial(num);
	
		cout<<" \t " << num << "!  =  " <<result;
	}
}
