#include<iostream>
using  namespace std;
int main()
{
	double num1,num2;
	char op;
	cout<<"Enter the first Number:";
	cin>>num1;
	
	cout<<"Enter the second Number:";
	cin>>num2;
	
	cout<<"Enter Operator (+, -, *, /, %):";
	cin>>op;
	
	switch(op){
		case '+':
		cout<<"Result"<<num1 + num2;
		break;
		case '-':
		cout<<"Result"<<num1 - num2;
		break;
		case '*':
		cout<<"Result"<<num1 * num2;
		break;
		case '/':
			if(num2 !=0)
		{
			cout<<"Result"<<num1 / num2;
		}
		else
		{
			cout<<"Error";
		}
		break;
		case'%':
		cout<<"Result"<<(int)num1 % (int)num2;
		break;
	}
	return 0;
}
