#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	for (int i=0;i<m;i++)
		cin>>a[i];
	int freq[102];
	for (int i=0;i<102;i++)
		freq[i]=0;
	int count=0;
	for (int i=0;i<m;i++)
	{
		if (a[i]!=0)
		{
			freq[a[i]]++;
		
		for (int j=i+1;j<m;j++)
		{
			if (a[j]==a[i])
			{
				//cout<<"check for "<<a[i]<<endl;;
				freq[a[i]]++;
				a[j]=0;
			}
		}
		}
	}
	//cout<<freq[1];
	int freq_final[102];
	for (int i=0;i<102;i++)
		freq_final[i]=0;
	int k=0;
for (int i=0;i<102;i++)
{
	if (freq[i]>0)
	{
	freq_final[k]=freq[i];
	count++;
	k++;
	}
}
//cout<<freq_final[0];
sort(freq_final,freq_final+count);
int ans=m/n;
int number=0;
int flag=0;
int i;
int j;
for (i=ans;i>=1;i--)
{
	for (j=count-1;j>=0;j--)
	{
		number+=freq_final[j]/i;
		if (number>=n)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
		break;
}
if (flag==0)
	cout<<0;
else
	cout<<i;
// for (int i=0;i<count;i++)
// 	cout<<freq_final[i]<<" ";

}