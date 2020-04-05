#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}

int multiply(int c,int d)
{
	return c*d;
}

int subtract(int a,int b)
{
	return a-b;
}

float divide(int a,int b)
{
	return float(a)/b;
}

int main()
{
	int a=9;
	int b=4;
	cout<<divide(a,b);

}
