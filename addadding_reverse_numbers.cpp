#include <bits/stdc++.h>
using namespace std;
int rev_number (int a)
{
	int n=0;
	int temp=a;
	while(temp>0)
	{
		n++;
		temp/=10;
	}
	temp=a;
	int new_num=0;
	while (temp>0)
	{
		int rem=temp%10;
		new_num+=rem*pow(10,n-1);
		temp/=10;
		n--;
	}
	return new_num;
}
int main()
{
	// int N;
	// cin>>N;
	// for (int i=0;i<N;i++)
	// {
	// 	int a,b;
	// 	cin>>a>>b;
	// 	cout<<rev_number(rev_number(a)+rev_number(b))<<endl;
	// }
	long long int n;
	cin>>n;
	long long int j=n+1;
	while (1)
	{
		if (rev_number(j)==j)
			{
			cout<<j;
			break;
			}
		j++;

	}
}