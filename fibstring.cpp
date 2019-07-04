#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	char S[100000];
	char C[100000];
	long int A[100000];
	int T;
	long int k;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	k=0;
	long int count;
	cin>>S;
	// for (int i=0;S[i]!='\0';i++);
	// 	cout<<i<<endl;
	for (long int i=0;S[i]!='\0';i++)
	{
		if (S[i]!=' ')
		{
			//cout<<"check";
			count=1;
		for (long int j=i+1;S[j]!='\0';j++)
		{
			
			if (S[i]==S[j])
			{
				count++;
				S[j]=' ';
			}
		}
		//cout<<count<<endl;
		A[k]=count;
		//cout<<A[k]<<endl;
		k++;
	}
	}
	//cout<<k<<endl;
	sort(A,A+k);
	long int l=0;
	for (long int i=0;S[i]!='\0';i++)
	{
		if (S[i]!=' ')
		{
			C[l]=S[i];
			l++;
		}
	}
	if (l<3)
		cout<<"Dynamic"<<endl;
	else
	{
		int flag=0;
		for (long int i=k-1;i>=0;i--)
		{
			long int j=0;
			long int l=i-1;
			while (j<l)
			{
			if (A[i]==A[j]+A[l])
			{
				flag=1;
				break;
			}
			else if (A[i]>A[j]+A[l])
				j++;
			else 
				l--;
			}				
		}
		if (flag==0)
			cout<<"Not"<<endl;
		else 
			cout<<"Dynamic"<<endl;
	}
}
}
