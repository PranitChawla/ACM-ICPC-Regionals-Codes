#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int no_of_notes=0;
	no_of_notes=n/100;
	n=n%100;
	no_of_notes+=n/20;
	n=n%20;
	no_of_notes+=n/10;
	n=n%10;
	no_of_notes+=n/5;
	n=n%5;	
	no_of_notes=no_of_notes+n;
	cout<<no_of_notes;
}