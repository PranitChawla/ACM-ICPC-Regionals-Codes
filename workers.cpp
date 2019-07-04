#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int C[N],t[N];
	for (int i=0;i<N;i++)
		cin>>C[i];
	for (int i=0;i<N;i++)
		cin>>t[i];
	int minau[N],mintr[N],minbo[N];
	int k=0;
	int l=0;
	int m=0;
	for (int i=0;i<N;i++)
	{
		if (t[i]==1)
		{
			minau[k]=C[i];
			k++;
		}
		else if (t[i]==2)
		{
			mintr[l]=C[i];
			l++;
		}
		else if (t[i]==3)
		{
			minbo[m]=C[i];
			m++;
		}
	}
	//int ma,mt,mb;
	if (k==0||l==0)
	{
		int mincoin=minbo[0];
		for (int i=0;i<m;i++)
		{
			if (minbo[i]<mincoin)
				mincoin=minbo[i];
		}
		cout<<mincoin<<endl;
		// ma=INT_MAX;
		// mt=INT_MAX;
	}
	else if (m==0)
	{
		int mincoin1=minau[0];
		for (int i=0;i<k;i++)
		{
			if (minau[i]<mincoin1)
				mincoin1=minau[i];
		}
		int mincoin2=mintr[0];
		for (int i=0;i<l;i++)
		{
			if (mintr[i]<mincoin2)
				mincoin2=mintr[i];
		}
		cout<<mincoin1+mincoin2;
	}
	else 
	{
		int mincoin=minbo[0];
		int mincoin1=minau[0];
		int mincoin2=mintr[0];
		for (int i=0;i<m;i++)
		{
			if (minbo[i]<mincoin)
				mincoin=minbo[i];
		}
		for (int i=0;i<k;i++)
		{
			if (minau[i]<mincoin1)
				mincoin1=minau[i];
		}
		for (int i=0;i<l;i++)
		{
			if (mintr[i]<mincoin2)
				mincoin2=mintr[i];
		}
		if (mincoin<=(mincoin1+mincoin2))
			cout<<mincoin;
		else 
			cout<<mincoin1+mincoin2;
			
	}
	
}