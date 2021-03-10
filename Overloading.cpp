#include<iostream>
#include<math.h>

using namespace std;

float m,n;

float power(float m)
{
	float result;
	result = pow(m,2);
	return result;
}

float power(float m,float n)
{
	float result;
	result = pow(m,n);
	return result;
}


void display(float data)
{
	cout<<"Final answer after raising power is : "<<data;
}



int main()
{
	float choice,output;
	
	cout<<"Enter the number : ";
	cin>>m;
	
	cout<<"Press 0 if you want to calculate square of a number : ";
	cin>>choice;
	
	if (choice == 0)
	{
		output = power(m,2);
		
		display(output);
	}
	
	else
	{
		cout<<"Enter the power : ";
		cin>>n;
		
		output = power(m,n);
		
		display(output);
	}
}
