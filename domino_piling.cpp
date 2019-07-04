#include <bits/stdc++.h>
using namespace std;
int main()
{
	int M,N;
	cin>>M>>N;
	int max,min;
	if (M>N)
	{
		max=M;
		min=N;
	}
	else
	{
		max=N;
		min=M;
	}
		if (min%2==0)
			cout<<max*min/2;
		else
			cout<<max*(min-1)/2+max/2;
}
