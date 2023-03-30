#include<iostream>
#include<cmath>
using namespace std;

void invest(double amount,double rate,int years){
	for(int i=1; i<=years; i++)
		{
			double a=(amount * (1+rate));
			cout.precision(2);
			cout << fixed<<"year "<<i<<" : $"<<a<<endl;
			amount = a;
		}
}
int main()
{
	invest(100,.05,3);
	
}
