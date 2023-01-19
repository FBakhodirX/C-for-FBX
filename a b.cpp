#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;
int main()
{
    ifstream fname;
    fname.open("INPUT.TXT");
    int s,d;
    fname >> s >> d;
    int sum=s+d;
    ofstream file("OUTPUT.TXT");
    file << sum ;
}