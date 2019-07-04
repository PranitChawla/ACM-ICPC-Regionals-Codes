#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int mcm (int i,int j,int p[])
{
	int m=INT_MAX;
	if (i==j)
		return 0;
	else
	{
	for (int k=i;k<j;k++)
	{
		if (mcm(i,k,p)+mcm(k+1,j,p)+p[i-1]*p[k]*p[j]<m)
			m=mcm(i,k,p)+mcm(k+1,j,p)+p[i-1]*p[k]*p[j];
	}
	//cout<<m<<endl;
	return m;
	}

}
int main()
{
	int p[]={40,20,30,10,30};
	cout<<mcm(1,4,p);
}