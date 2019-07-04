#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		ll N,S;
		cin>>N>>S;
		ll A[N+1];
		ll B[N+1];
		for (ll i=1;i<=N;i++)
			{
				cin>>A[i];
				B[i]=1;
			}
		// for (ll i=1;i<=N;i++)
		// 	cout<<A[i]<<" ";
		//cout<<endl;
		if (N>S)
			cout<<0<<endl;
		else
		{
		int flag=0;
		ll k;
		for (k=1;k<=N;k++)
			{
				ll i;
				ll sum=0;
				// for (ll q=1;q<=N;q++)
				// 	B[q]=1;
					ll left;
					ll right;
				if (N>300)
				{
					for (i=1;i<=N;i++)
				{
					left=min(i-1,k);
					right=min(N-i,k);
					for (ll j=i-left;j<=i+right;j++)
					{
						if (j!=i)
						{
							if (A[j]<A[i])
								{
									if (B[i]<=B[j])
										B[i]=B[j]+1;
									//count_less[i]++;
								}
							if (A[j]==A[i])
							{
								if (B[j]<B[i])
									B[j]=B[i];
							}
						}
					}
				}
				}
				else
				{
				for (int q=0;q<20;q++)
				{
				for (i=1;i<=N;i++)
				{
					left=min(i-1,k);
					right=min(N-i,k);
					for (ll j=i-left;j<=i+right;j++)
					{
						if (j!=i)
						{
							if (A[j]<A[i])
								{
									if (B[i]<=B[j])
										B[i]=B[j]+1;
									//count_less[i]++;
								}
							if (A[j]==A[i])
							{
								if (B[j]<B[i])
									B[j]=B[i];
							}
						}
					}
				}
				}
			}
				for (ll i=1;i<=N;i++)
					cout<<B[i]<<" ";
				cout<<endl;
				for (ll t=1;t<=N;t++)
						sum+=B[t];
					cout<<sum<<endl;
					if (sum>S)
						{
							k--;
							flag=1;
							break;
						}
					}
			if (flag==1)
				cout<<k+1<<endl;
			else
				cout<<N+1<<endl;
		}

}
}

