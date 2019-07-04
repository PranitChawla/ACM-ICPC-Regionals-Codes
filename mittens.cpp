#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int m,n;
	cin>>n;
	cin>>m;
	int c[n];
	int flag[n];
// memset(flag,1,sizeof(flag));
for (int i=0;i<n;i++)
	flag[i]=1;
int pair[n];
// memset(pair,-1,sizeof(pair));
for (int i=0;i<n;i++)
	pair[i]=-1;
	//vector < pair <int,int> > a;
	for(int i=0;i<n;i++)
		{
			cin>>c[i];
		}
	int p[n];
	memset(p,0,sizeof(p));
	int k=0;
	int count=0;
	int temp=0;
	if (n==1)
{
	cout<<0<<endl;
	cout<<c[0]<<" "<<c[0];
	}
	else
	{
	for (int i=0;k<n;i=(i+1)%n)
	{ 
		
		if(c[i]!=c[k]&&flag[i]==2)
		{
			if(pair[i]==c[k])
				k++;
			temp=0;

		}
		//cout<<flag[i]<<endl;
		else
        if(c[i]!=c[k]&&flag[i]<2)
        {
        	//cout<<c[i]<<" "<<c[k]<<endl;
        	//a.make_pair(c[i],c[k]);
        	pair[i]=c[k];
        	flag[i]=2;
         k++;
         count++;
         temp=0;

        }
        else
        {
        	temp++;
        }
        if(temp>=n)
        	k++;
	}
	cout<<count<<endl;
for(int i=0;i<n;i++){
	if(pair[i]!=-1)
	{
		cout<<c[i]<<" "<<pair[i]<<endl;
	}
	else
		cout<<c[i]<<" "<<c[i]<<endl;
}
}

return 0;



}