#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cout <<  "Enter a positive integer: ";
	cin >> a;
	for(int i=1; i<=a ;i++){
		if (a % i ==0){
			cout<< i <<" is a factor of "<< a <<endl;
		} 
	}
}
