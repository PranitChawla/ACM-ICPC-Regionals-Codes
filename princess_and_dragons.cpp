#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		ll N,P;
		cin>>N>>P;
		ll A[N+1];
		ll i;
		for (i=1;i<=N;i++)
			cin>>A[i];
		sort(A+1,A+N+1);
		// for (int i=1;i<=N;i++)
		// 	cout<<A[i]<<" ";
		//	cout<<endl;
		for (ll f=1;f<=N;f++)
		{
			ll left=f-1;
			ll right=N-f;
			//cout<<left<<" "<<right<<endl<<endl;
			//cout<<f<<endl;
			bool is_visited [N+1];
			for (ll q=1;q<=N;q++)
				is_visited[q]=0;
			if (right>=left)
			{
				ll sum=0;
				ll values[N+1];
				ll c=f;
				ll t=N;
				while (sum<P&&c<=N)
				{
				int flag=0;
				for (i=1;i<=N;i++)
				{
					//cout<<sum<<endl;
					if (is_visited[i]==1)
						continue;
					if (is_visited[i]==0)
					sum+=A[i];
					if (sum>=P)
					{
						flag=1;
						break;
					}
					sum-=A[i];
				}
				if (flag==0)
				{
					values[c]=A[t];
					sum+=A[t];
					c++;
					is_visited[t]=1;
					t--;
				}
				else
				{
					values[c]=A[i];
					c++;
					is_visited[i]=1;
				}
				}
				ll u=1;
				while (c<=N)
				{
					if (is_visited[u]==0)
					{
						values[c]=A[u];
						c++;
						is_visited[u]=1;
					}
					u++;
				}
				ll r=f-1;
				ll e;
				while (r>=1)
				{
					for (e=N;e>=1;e--)
					{
						if (is_visited[e]==0)
							break;
					}
					values[r]=A[e];
					is_visited[e]=1;
					r--;
				}
				ll count=0;
				// for (i=1;i<=N;i++)
				// 	cout<<values[i]<<" ";
				//cout<<endl;
				for (i=1;i<=N;i++)
				{
					sum=0;
					if (i>=f)
					{
						for (ll j=i;j>=f;j--)
							sum+=values[j];
						if (sum>=P)
							count++;
					}
					else
					{
						for (ll j=i;j<=f;j++)
							sum+=values[j];
						if (sum>=P)
							count++;
					}
				}
			cout<<count<<" ";
			//cout<<endl;
			}	
			else
			{
				ll sum=0;
				ll values[N+1];
				ll c=f;
				ll t=N;
				while (sum<P&&c>=1)
				{
				int flag=0;
				//ll i;
				for (i=1;i<=N;i++)
				{
					if (is_visited[i]==1)
						continue;
					if (is_visited[i]==0)
					sum+=A[i];
					if (sum>=P)
					{
						flag=1;
						break;
					}
					sum-=A[i];
				}
				if (flag==0)
				{
					values[c]=A[t];
					sum+=A[t];
					c--;
					is_visited[t]=1;
					t--;
				}
				else
				{
					values[c]=A[i];
					c--;
					is_visited[i]=1;
				}
				}
				ll u=1;
				while (c>=1)
				{
					if (is_visited[u]==0)
					{
						values[c]=A[u];
						c--;
						is_visited[u]=1;
					}
					u++;
				}
				ll r=f+1;
				ll e;
				while (r<=N)
				{
					for (e=N;e>=1;e--)
					{
						if (is_visited[e]==0)
							break;
					}
					values[r]=A[e];
					is_visited[e]=1;
					r++;
				}
				ll count=0;
				// for (i=1;i<=N;i++)
				// 	cout<<values[i]<<" ";
				// cout<<endl;
				for (i=1;i<=N;i++)
				{
					sum=0;
					if (i>=f)
					{
						for (ll j=i;j>=f;j--)
							sum+=values[j];
						if (sum>=P)
							count++;
					}
					else
					{
						for (ll j=i;j<=f;j++)
							sum+=values[j];
						if (sum>=P)
							count++;
					}
				}
				cout<<count<<" ";
				//cout<<endl;
			}
		}
	cout<<endl;
}
}